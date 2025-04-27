class Solution:
    def calPoints(self, operations: List[str]) -> int:
        newList=[]
        for i in range(len(operations)):
            if operations[i]!="C" and operations[i]!="D" and operations[i]!="+":
                newList.append(int(operations[i]))
            elif operations[i]=="C":
                newList.remove(newList[-1])
            elif operations[i]=="D":
                newList.append(newList[-1]*2)
            elif operations[i]=="+":
                newList.append(newList[-1]+newList[-2])
        return sum(newList)