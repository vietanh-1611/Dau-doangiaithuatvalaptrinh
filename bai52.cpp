class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        // Sử dụng vector<bool> để đánh dấu các cột và đường chéo đã bị chiếm
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n, false); // Đường chéo chính (row - col + n)
        vector<bool> diag2(2 * n, false); // Đường chéo phụ (row + col)
        
        backtrack(0, n, count, cols, diag1, diag2);
        return count;
    }

private:
    void backtrack(int row, int n, int& count, vector<bool>& cols, 
                   vector<bool>& diag1, vector<bool>& diag2) {
        // Điều kiện dừng: Đã đặt đủ n quân hậu vào n hàng
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; col++) {
            // Kiểm tra xem vị trí (row, col) có an toàn không
            // diag1: Hiệu row - col không đổi dọc theo đường chéo \
            // diag2: Tổng row + col không đổi dọc theo đường chéo /
            if (cols[col] || diag1[row - col + n] || diag2[row + col]) {
                continue;
            }

            // Đặt quân hậu: Đánh dấu các ranh giới tấn công
            cols[col] = diag1[row - col + n] = diag2[row + col] = true;

            // Tiến hành thử nghiệm ở hàng tiếp theo
            backtrack(row + 1, n, count, cols, diag1, diag2);

            // Quay lui (Backtrack): Gỡ quân hậu ra để thử phương án khác
            cols[col] = diag1[row - col + n] = diag2[row + col] = false;
        }
    }
};