class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        N = 9

        # Use set to record the status
        rows = [set() for _ in range(N)]
        cols = [set() for _ in range(N)]
        boxes = [set() for _ in range(N)]
        
        for r in range(N):
            for c in range(N):
                val = board[r][c]
                
                # Check if the position is filled with number
                if val==".":
                    continue
                
                # Checking if the row is filled with the number
                if val in rows[r]:
                    return False
                
                rows[r].add(val)

                # Checking if the column is filled with the number
                if val in cols[c]:
                    return False
                
                cols[c].add(val)

                # Checking if the box is filled with the number
                idx = (r//3)*3+c//3

                if val in boxes[idx]:
                    return False
                
                boxes[idx].add(val)
        
        return True