bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int freq[256];
    for(int i = 0; i < 9; i++)
    {
        for(int k = 0; k < 256; k++)
            freq[k] = 0;
        for(int j = 0; j < 9; j++)
            if(board[i][j] != '.')
            {
                freq[board[i][j]]++;
                if(freq[board[i][j]] > 1)
                    return false;
            }
    }
    for(int j = 0; j < 9; j++)
    {
        for(int k = 0; k < 256; k++)
            freq[k] = 0;
        for(int i = 0; i < 9; i++)
        {
            if(board[i][j] != '.')
            {
                freq[board[i][j]]++;
                if(freq[board[i][j]] > 1)
                    return false;
            }
        }
    }
    for(int i = 0; i < 9; i += 3)
        for(int j = 0; j < 9; j += 3)
            {
               for(int k = 0; k < 256; k++)
                    freq[k] = 0;
                for(int x = 0; x < 3; x++)
                    for(int y = 0; y < 3; y++)
                        if(board[i + x][j + y] != '.')
                        {
                            freq[board[i + x][j + y]] += 1;
                            if(freq[board[i + x][j + y]] > 1)
                                return false;
                        }
            }
    return true;
}
