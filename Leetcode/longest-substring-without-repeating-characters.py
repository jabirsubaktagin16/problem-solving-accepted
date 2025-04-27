class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s is None or len(s)==0:
            return 0
        if len(s)==1:
            return 1
        
        left = 0
        right = 0
        ans = 0

        ans_set = set()

        while right<len(s):
            c = s[right]
            while c in ans_set:
                ans_set.remove(s[left])
                left += 1
            ans_set.add(c)
            ans = max(ans, right-left+1)
            right += 1
        
        return ans