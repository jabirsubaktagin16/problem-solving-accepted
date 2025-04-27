class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        n = len(matrix)

        if n == 0:
            return []

        result = []

        m = len(matrix[0])

        direction = 0
        left = 0
        top = 0
        right = m - 1
        bottom = n - 1

        while top <= bottom and left <= right:
            # traverse from left to right
            if direction == 0:
                for i in range(left, right + 1):
                    result.append(matrix[top][i])
                top += 1
            # traverse from top to bottom
            elif direction == 1:
                for i in range(top, bottom + 1):
                    result.append(matrix[i][right])
                right -= 1
            # traverse from right to left
            elif direction == 2:
                for i in range(right, left - 1, -1):
                    result.append(matrix[bottom][i])
                bottom -= 1
            # traverse from bottom to top
            else:
                for i in range(bottom, top - 1, -1):
                    result.append(matrix[i][left])
                left += 1

            direction = (direction + 1) % 4

        return result