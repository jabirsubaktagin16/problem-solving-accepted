class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        if nums is None or len(nums)==0 or k<=0:
            return nums[0]
        
        n = len(nums)
        result = [0] * (n - k + 1)
        dq = deque()

        for i in range(n):
            # Remove indices that are out of the current window
            while dq and dq[0] < i - k + 1:
                dq.popleft()
            
            # Remove indices whose corresponding values are less than nums[i]
            while dq and nums[dq[-1]] < nums[i]:
                dq.pop()

            # Add the current index to the deque
            dq.append(i)

            # Add the maximum element of the current window to the result
            if i >= k - 1:
                result[i - k + 1] = nums[dq[0]]
        
        return result