class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # Initializing Left and Right Pointers
        left = 0
        right = len(numbers)-1

        while left<right:
            # If sum of left and right index of numbers is greater than target
            # then reduce the right value
            if numbers[left]+numbers[right]>target:
                right -=1
            # If sum of left and right index of numbers is less than target
            # then increase the left value
            elif numbers[left]+numbers[right]<target:
                left +=1
            # Otherwise return the value of left and right
            else:
                return [left+1, right+1]
        
        # If solution not found return null
        return null