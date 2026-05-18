class Solution {
public:
    string replaceDigits(string s) {
        // Duyệt qua các vị trí lẻ (nơi chứa chữ số)
        for (int i = 1; i < s.length(); i += 2) {
            // s[i-1] là ký tự ngay trước đó
            // s[i] - '0' chuyển ký tự số (VD: '5') thành số nguyên (5)
            s[i] = s[i - 1] + (s[i] - '0');
        }
        return s;
    }
};
// MSSV/HoTen - Bai 049
