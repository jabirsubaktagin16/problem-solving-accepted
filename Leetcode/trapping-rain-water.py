class Solution:
    def trap(self, height: List[int]) -> int:
        if len(height)==0:
            return 0
        
        left = 0
        right = len(height)-1
        sum = 0
        leftMax = height[left]
        rightMax = height[right]

        while left<right:
            if leftMax<rightMax:
                left += 1
                leftMax = max(leftMax, height[left])
                sum += leftMax - height[left]
            else:
                right -= 1
                rightMax = max(rightMax, height[right])
                sum += rightMax - height[right]
        
        return sum