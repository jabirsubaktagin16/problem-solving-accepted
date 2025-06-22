class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for token in tokens:
            if(self.isOperator(token)):
                b = stack.pop()
                a = stack.pop()
                result = self.applyOperator(token, int(a), int(b))
                stack.append(result)
            else:
                stack.append(token)

        return int(stack.pop())
    
    def isOperator(self, token:str)->bool:
        return token in {'+','-','*','/'}
    
    def applyOperator(self, opeator:str, a:int, b:int)->int:
         match opeator:
            case '+':
                return a+b
            case '-':
                return a-b
            case '*':
                return a*b
            case '/':
                return a / b
            case default:
                raise ValueError("Invalid Opeator")