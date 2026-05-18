class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Nhảy qua các ký tự không phải chữ hoặc số từ bên trái
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Nhảy qua các ký tự không phải chữ hoặc số từ bên phải
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // So sánh hai ký tự sau khi chuyển về chữ thường
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            // Thu hẹp phạm vi
            left++;
            right--;
        }

        return true;
    }
};
// MSSV/HoTen - Bai 078
