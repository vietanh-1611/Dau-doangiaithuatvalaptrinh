class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                // Tìm ô trống
                if (board[r][c] == '.') {
                    // Thử điền các số từ '1' đến '9'
                    for (char num = '1'; num <= '9'; num++) {
                        if (isValid(board, r, c, num)) {
                            board[r][c] = num; // Đặt số vào ô

                            // Đệ quy để giải tiếp các ô còn lại
                            if (solve(board)) {
                                return true; // Nếu giải xong thì thoát
                            }

                            // Nếu không giải được, quay lui (backtrack)
                            board[r][c] = '.';
                        }
                    }
                    return false; // Không có số nào từ 1-9 điền được vào ô này
                }
            }
        }
        return true; // Tất cả các ô đã được điền xong
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            // Kiểm tra hàng
            if (board[row][i] == num) return false;
            // Kiểm tra cột
            if (board[i][col] == num) return false;
            // Kiểm tra khối 3x3
            // Công thức: hàng đầu khối + (i / 3), cột đầu khối + (i % 3)
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num) return false;
        }
        return true;
    }
};