func isValidSudoku(board [][]byte) bool {
    row := make(map[byte]int)
    column := make(map[byte]int)

    for i := 0; i < 9; i++ {
        row = make(map[byte]int)
        for j := 0; j < 9; j++ {
            if board[i][j] != '.' {
                row[board[i][j]]++
                if row[board[i][j]] > 1 {
                    return false
                }
            }
        }
    }

    for j := 0; j < 9; j++ {
        column = make(map[byte]int)
        for i := 0; i < 9; i++ {
            if board[i][j] != '.' {
                column[board[i][j]]++
                if column[board[i][j]] > 1 {
                    return false
                }
            }
        }
    }

    for k := 0; k < 9; k += 3 {
        for l := 0; l < 9; l += 3 {
            grid := make(map[byte]int)
            for i := k; i < k + 3; i++ {
                for j := l; j < l + 3; j++ {
                    if board[i][j] != '.' {
                        grid[board[i][j]]++
                        if grid[board[i][j]] > 1 {
                            return false
                        }
                    }
                }
            }
        }
    }

    return true
}
