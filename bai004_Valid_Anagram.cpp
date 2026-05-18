class Solution {
public:
    bool isAnagram(string s, string t) {
        // Nếu độ dài khác nhau thì không thể là anagram
        if (s.length() != t.length()) {
            return false;
        }

        // Tạo mảng 26 phần tử đại diện cho 26 chữ cái 'a'-'z'
        int count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            // Tăng ở vị trí ký tự trong s, giảm ở vị trí ký tự trong t
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // Kiểm tra xem tất cả các vị trí có về lại 0 hay không
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
// MSSV/HoTen - Bai 004
