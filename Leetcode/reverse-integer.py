class Solution:
    def reverse(self, x: int) -> int:
        result = 0
        remainder = 0
        norm_num = 0
        
        if x<0:
            norm_num = (-1)*x
        else:
            norm_num = x
        
        while norm_num>0:
            remainder = norm_num % 10
            result = result * 10 + remainder
            norm_num = norm_num//10
        
        if result >= 2147483647 or result <= -2147483648: result = 0

        return result if x > 0 else (-1)*result