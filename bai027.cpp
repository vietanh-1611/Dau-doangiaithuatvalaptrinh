class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            // tolower tự động xử lý: nếu là 'A' -> 'a', nếu là '1' -> '1'
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
// MSSV/HoTen - Bai 027
