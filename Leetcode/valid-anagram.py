class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # If both strings are not of same length, return false
        if len(s)!=len(t):
            return False
        
        # Initialize an array with length of 26 size and zeros
        charcounts = [0]*26

        for i in range(len(s)):
            # add count to the index number of first string's index
            charcounts[ord(s[i]) - ord('a')] += 1
            # subtract count to the index number of second string's index
            charcounts[ord(t[i]) - ord('a')] -= 1
        
        # Check if all counts are zero
        for i in range(26):
            if charcounts[i] != 0:
                return False
        
        return True