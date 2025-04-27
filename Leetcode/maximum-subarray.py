class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = -10000
        currentSum = 0
        n = len(nums)

        for i in range(n):
            currentSum += nums[i]
            if nums[i] > currentSum:
                currentSum = nums[i]
            if currentSum > maxSum:
                maxSum = currentSum

        return maxSum