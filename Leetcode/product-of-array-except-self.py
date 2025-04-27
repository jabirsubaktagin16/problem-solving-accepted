class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # Initialize Result Array with 1s
        result = [1]*len(nums)
        
        # Assuming there is 1 before and after of the array
        prefix=1
        postfix=1

        # Iterating loop in straight way and keeping the prefix value in order
        # After setting the value, update the prefix by multiplying current value of
        # array with the prefix
        for i in range(len(nums)):
            result[i] = prefix
            prefix = nums[i]*prefix
        
        # Iterating loop in reverse way and keeping the value multiplying with postfix with current result value
        # After setting the value, update the postfix by multiplying current value of
        # array with the postfix
        for i in range(len(nums)-1,-1,-1):
            result[i] = result[i]*postfix
            postfix = nums[i]*postfix
        
        return result