class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # If k is same as length of nums, return nums
        if k==len(nums):
            return nums
        
        # List of counts of every numbers occurance
        count = Counter(nums)
        
        # Initialize heap
        heap = []

        # Iterate over count array
        for n, freq in count.items():
            # Push number to the heap
            heapq.heappush(heap, (-freq, n))
        
        # Initialize answer list
        ans = []
        # Iterate over k
        for _ in range(k):
            # Pop value from heap and push in answer list
            ans.append(heapq.heappop(heap)[1])
        
        return ans