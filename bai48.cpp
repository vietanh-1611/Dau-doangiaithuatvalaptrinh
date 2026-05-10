class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Bước 1: Chuyển vị ma trận (Transpose)
        for (int i = 0; i < n; i++) {
            // Chú ý j chạy từ i để không hoán đổi ngược lại về chỗ cũ
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Bước 2: Đảo ngược từng hàng (Reverse)
        for (int i = 0; i < n; i++) {
            // Có thể dùng hàm có sẵn reverse(matrix[i].begin(), matrix[i].end());
            // Hoặc dùng hai con trỏ để đảo ngược tại chỗ:
            int left = 0, right = n - 1;
            while (left < right) {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};