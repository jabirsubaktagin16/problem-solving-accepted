class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        n = len(candies)
        result = []
        maxCandy = self.maxFromArray(candies)

        for i in range(n):
            result.append((candies[i] + extraCandies) >= maxCandy)

        return result

    def maxFromArray(self, nums: List[int]) -> int:
        n = len(nums)
        maximumValue = 0
        for i in range(n):
            if nums[i] >= maximumValue:
                maximumValue = nums[i]

        return maximumValue