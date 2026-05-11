class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Con trỏ cho chuỗi s
        int j = 0; // Con trỏ cho chuỗi t
        
        // Duyệt cho đến khi một trong hai chuỗi kết thúc
        while (i < s.length() && j < t.length()) {
            // Nếu ký tự trùng nhau, ta tiến tới ký tự tiếp theo của s
            if (s[i] == t[j]) {
                i++;
            }
            // Luôn luôn tiến tới ký tự tiếp theo của t
            j++;
        }
        
        // Nếu i bằng độ dài của s, nghĩa là ta đã tìm thấy tất cả ký tự của s trong t
        return i == s.length();
    }
};