class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        freq = [0] * 256
        #row traversal
        for i in range(0, 9):
            freq = [0] * 256
            for j in range(0, 9):
                if board[i][j] != '.':
                    freq[int(board[i][j])] += 1
                    if freq[int(board[i][j])] > 1:
                        return False
        freq = [0] * 256       
        #column traversal
        for j in range(0, 9):
            freq = [0] * 256
            for i in range(0, 9):
                if board[i][j] != '.':
                    freq[int(board[i][j])] += 1
                    if freq[int(board[i][j])] > 1:
                        return False
        #3 x 3 sub-boxes traversal
        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                freq = [0] * 256
                for x in range(3):
                    for y in range(3):
                        if board[i + x][j + y] != '.':
                            freq[int(board[i + x][j + y])] += 1
                            if freq[int(board[i + x][j + y])] > 1:
                                return False
        return True
        
