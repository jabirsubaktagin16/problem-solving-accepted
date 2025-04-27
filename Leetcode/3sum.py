class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []

        for i in range(len(nums)):
            if nums[i] > 0:
                break

            if i == 0 or nums[i] != nums[i - 1]:
                self.two_sum(nums, i, result)

        return result

    def two_sum(self, nums: List[int], i: int, result: List[List[int]]):
        left = i + 1
        right = len(nums) - 1

        while left < right:
            sum = nums[i] + nums[left] + nums[right]

            if sum < 0:
                left += 1
            elif sum > 0:
                right -= 1
            else:
                result.append([nums[i], nums[left], nums[right]])
                left += 1
                while left < right and nums[left] == nums[left - 1]:
                    left += 1