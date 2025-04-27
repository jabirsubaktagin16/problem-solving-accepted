class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        
        numSet = set()

        for i in range(len(nums)):
            numSet.add(nums[i])
        
        longestSub = 1

        for num in numSet:
            if num-1 in numSet:
                continue
            else:
                currentNum = num
                currentSub = 1
                while currentNum+1 in numSet:
                    currentNum +=1
                    currentSub +=1
                longestSub = max(currentSub, longestSub)
        
        return longestSub