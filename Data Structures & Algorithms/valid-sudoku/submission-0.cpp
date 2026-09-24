class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //1. check for row repetition
        //2. check for col repetition

        for (int i = 0; i < 9; i++) {
            vector<bool> row(10, false);
            vector<bool> col(10, false);
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.' && board[j][i] == '.') {
                    continue;
                } else if (board[i][j] == '.') {
                    int colval = (board[j][i] - '0');
                    if (col[colval] == true) {
                        return false;
                    } else {
                        col[colval] = true;
                    }
                } else if (board[j][i] == '.') {
                    int rowval = (board[i][j] - '0');
                    if (row[rowval] == true) {
                        return false;
                    } else {
                        row[rowval] = true;
                    }
                } else {
                    int rowval = (board[i][j] - '0');
                    int colval = (board[j][i] - '0');
                    if (row[rowval] == true || col[colval] == true) {
                        return false;
                    } else {
                        row[rowval] = true;
                        col[colval] = true;
                    }   
                }
            }
        }

        //3. check for 3*3 matrix repetition      

        for (int row = 0; row < 9; row+=3) {
            for (int col = 0; col < 9; col+=3) {
                vector<bool> seen(10, false);
                for (int x = row; x < row+3; x++) {
                    for (int y = col; y < col+3; y++) {
                       if (board[x][y] == '.') {
                        continue;
                        } else {
                            int val = board[x][y] - '0';
                            if (seen[val]) {
                                return false;
                            } else {
                                seen[val] = true;
                            }
                        }
                    }
                }
            }
        }
        
        return true;
    }
};