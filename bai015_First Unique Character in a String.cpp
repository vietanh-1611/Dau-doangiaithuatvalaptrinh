class Solution {
public:
    int firstUniqChar(string s) {
        // Mảng lưu tần suất xuất hiện của 26 chữ cái 'a'-'z'
        int count[26] = {0};
        
        // Bước 1: Duyệt chuỗi lần đầu để đếm tần suất
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // Bước 2: Duyệt chuỗi lần hai để tìm ký tự duy nhất đầu tiên
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i; // Trả về chỉ số ngay khi tìm thấy
            }
        }
        
        // Nếu không tìm thấy ký tự nào thỏa mãn
        return -1;
    }
};
// MSSV/HoTen - Bai 015
