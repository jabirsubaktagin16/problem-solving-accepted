class MinStack:

    class Node:
        def __init__(self, val, min_val, next_node):
            self.val = val
            self.min = min_val
            self.next = next_node

    def __init__(self):
        self.head = None

    def push(self, val: int) -> None:
        if self.head is None:
            self.head = self.Node(val, val, None)
        else:
            self.head = self.Node(val, min(val, self.head.min), self.head)

    def pop(self) -> None:
        if self.head is not None:
            self.head = self.head.next

    def top(self) -> int:
        return self.head.val

    def getMin(self) -> int:
        return self.head.min if self.head is not None else None


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()