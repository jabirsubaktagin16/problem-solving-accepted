class Solution:
    def scoreOfString(self, s: str) -> int:
        if len(s)==0:
            return 0
        sum = 0
        for i in range(1, len(s)):
            sum = sum+abs(ord(s[i])-ord(s[i-1]))
        return sum