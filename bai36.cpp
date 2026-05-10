class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Sử dụng mảng để đánh dấu: [vị trí][số]
        // Ví dụ: rows[2][5] = true nghĩa là hàng thứ 2 đã có số 5.
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;

                // Chuyển ký tự '1'-'9' thành chỉ số 0-8
                int num = board[r][c] - '1';
                
                // Xác định chỉ số của khối 3x3
                // Công thức: (hàng / 3) * 3 + (cột / 3)
                int box_index = (r / 3) * 3 + (c / 3);

                // Kiểm tra xem số này đã xuất hiện chưa
                if (rows[r][num] || cols[c][num] || boxes[box_index][num]) {
                    return false;
                }

                // Đánh dấu số này đã xuất hiện
                rows[r][num] = true;
                cols[c][num] = true;
                boxes[box_index][num] = true;
            }
        }

        return true;
    }
};