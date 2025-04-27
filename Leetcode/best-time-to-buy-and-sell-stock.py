class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minProfit = prices[0]
        profit = 0

        for i in range(len(prices)):
            if prices[i]<minProfit:
                minProfit = prices[i]
            profit = max(profit, prices[i]-minProfit)
        
        return profit