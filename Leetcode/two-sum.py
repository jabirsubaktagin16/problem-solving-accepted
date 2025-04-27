class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = {}
        
        for i in range(len(nums)):
            # calculate complement of current number
            complement = target - nums[i]
            
            # check if complement is already in the map
            if complement in result:
                # if found return the indices of the complement and the current index
                return [result[complement], i]
            
            # otherwise add the current number and its index to the map
            result[nums[i]] = i
        
        # Return an empty array if no solution found
        return []