class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();

        // Điều kiện dừng: ra ngoài biên hoặc gặp nước ('0')
        if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == '0') {
            return;
        }

        // Đánh dấu ô hiện tại là đã thăm bằng cách đổi thành '0'
        grid[r][c] = '0';

        // Duyệt 4 hướng lân cận
        dfs(grid, r - 1, c); // Trên
        dfs(grid, r + 1, c); // Dưới
        dfs(grid, r, c - 1); // Trái
        dfs(grid, r, c + 1); // Phải
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        int islandCount = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Nếu tìm thấy đất liền
                if (grid[i][j] == '1') {
                    islandCount++; // Tìm thấy 1 hòn đảo mới
                    dfs(grid, i, j); // "Lấp" toàn bộ hòn đảo này
                }
            }
        }

        return islandCount;
    }
};