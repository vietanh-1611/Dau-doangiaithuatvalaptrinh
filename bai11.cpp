class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Nếu ransomNote dài hơn magazine thì chắc chắn không thể tạo được
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        // Mảng đếm tần suất cho 26 chữ cái tiếng Anh
        int count[26] = {0};

        // Đếm các ký tự có sẵn trong "kho" magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }

        // Kiểm tra xem magazine có đủ chữ để tạo ransomNote không
        for (char c : ransomNote) {
            count[c - 'a']--;
            
            // Nếu sau khi dùng, số lượng ký tự này âm tức là thiếu chữ
            if (count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};