class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        // 1. Kiểm tra điều kiện biên và màu sắc
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != oldColor) {
            return;
        }

        // 2. Thay đổi màu của ô hiện tại
        image[r][c] = newColor;

        // 3. Lan tỏa sang 4 hướng xung quanh
        dfs(image, r - 1, c, oldColor, newColor); // Trên
        dfs(image, r + 1, c, oldColor, newColor); // Dưới
        dfs(image, r, c - 1, oldColor, newColor); // Trái
        dfs(image, r, c + 1, oldColor, newColor); // Phải
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        
        // Nếu màu mới trùng màu cũ, không cần xử lý để tránh loop vô tận
        if (oldColor != color) {
            dfs(image, sr, sc, oldColor, color);
        }
        
        return image;
    }
};