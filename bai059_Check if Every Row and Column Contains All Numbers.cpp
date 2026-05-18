class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            unordered_set<int> rowSet;
            unordered_set<int> colSet;
            
            for (int j = 0; j < n; j++) {
                // Kiểm tra hàng i
                if (rowSet.count(matrix[i][j])) return false;
                rowSet.insert(matrix[i][j]);
                
                // Kiểm tra cột i
                if (colSet.count(matrix[j][i])) return false;
                colSet.insert(matrix[j][i]);
            }
            
            // Sau mỗi hàng/cột, nếu kích thước không đủ n số khác nhau
            if (rowSet.size() != n || colSet.size() != n) return false;
        }
        
        return true;
    }
};
// MSSV/HoTen - Bai 059
