class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        sum = 0

        while n>0:
            d = n%10
            sum += d
            product *= d
            n = n//10
        
        return (product-sum)