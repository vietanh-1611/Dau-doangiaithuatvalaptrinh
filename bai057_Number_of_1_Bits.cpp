class Solution {
public:
    bool checkString(string s) {
        // Duyệt từ đầu đến kế cuối
        for (int i = 0; i < s.length() - 1; i++) {
            // Nếu tìm thấy 'b' đứng ngay trước 'a'
            if (s[i] == 'b' && s[i + 1] == 'a') {
                return false;
            }
        }
        
        // Nếu không có vi phạm nào, chuỗi hợp lệ
        return true;
    }
};
// MSSV/HoTen - Bai 057
