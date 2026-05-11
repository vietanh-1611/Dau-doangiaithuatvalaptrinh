class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // Bước 1: Tạo mảng expected bằng cách copy mảng hiện tại
        vector<int> expected = heights;
        
        // Bước 2: Sắp xếp mảng expected theo thứ tự không giảm (tăng dần)
        sort(expected.begin(), expected.end());
        
        int count = 0;
        // Bước 3: So sánh từng vị trí giữa hai mảng
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                count++; // Tăng biến đếm nếu chiều cao không khớp
            }
        }
        
        return count;
    }
};
// MSSV/HoTen - Bai 030
