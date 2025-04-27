class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        occ = [0]*26
        left = 0
        right = 0
        ans = 0 
        maxOccurance = 0

        for right in range(len(s)):
            maxOccurance = max(maxOccurance, occ[ord(s[right]) - ord('A')] + 1)
            occ[ord(s[right]) - ord('A')] += 1
            
            if right-left+1-maxOccurance>k:
                occ[ord(s[left]) - ord('A')] -= 1
                left += 1
            
            ans = max(ans, right - left + 1)
        
        return ans