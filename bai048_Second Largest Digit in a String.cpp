class Solution {
public:
    int secondHighest(string s) {
        // Mảng đánh dấu sự hiện diện của các chữ số từ 0-9
        bool exists[10] = {false};
        
        // Bước 1: Duyệt chuỗi và đánh dấu các chữ số xuất hiện
        for (char c : s) {
            if (isdigit(c)) {
                exists[c - '0'] = true;
            }
        }
        
        int foundCount = 0;
        // Bước 2: Duyệt ngược từ 9 về 0 để tìm số lớn thứ hai
        for (int i = 9; i >= 0; i--) {
            if (exists[i]) {
                foundCount++;
                // Nếu đây là chữ số khác biệt thứ hai được tìm thấy
                if (foundCount == 2) {
                    return i;
                }
            }
        }
        
        // Bước 3: Không tìm thấy số lớn thứ hai
        return -1;
    }
};
// MSSV/HoTen - Bai 048
