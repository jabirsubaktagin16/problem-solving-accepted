class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        self.backtrack(ans,"",0,0,n)
        return ans

    def backtrack(self, ans:List[str],cur:str,open:int,close:int,max:int):
        if len(cur)==max*2:
            ans.append(cur)
            return
        if open<max:
            cur += "("
            self.backtrack(ans, cur, open + 1, close, max)
            cur = cur[:-1]
        if close < open:
            cur += ")"
            self.backtrack(ans, cur, open, close + 1, max)
            cur = cur[:-1]