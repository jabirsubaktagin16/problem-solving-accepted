class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs)==0:
            return []
        
        result = defaultdict(list)

        # Initialize an array with length of 26 size and zeros
        for s in strs:
            # Initialize an array with length of 26 size and zeros so that every word have different key
            charcounts = [0]*26

            for c in s:
                # Add 1 to the index of the character of charcounts List
                charcounts[ord(c) - ord('a')] += 1
            
            key = '#'.join(map(str, charcounts))
            # Append value to the respective keys
            result[key].append(s)
        
        return list(result.values())