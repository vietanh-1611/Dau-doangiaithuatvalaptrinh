class Solution {
public:
    bool areOccurrencesEqual(string s) {
        // Bước 1: Đếm số lần xuất hiện của mỗi ký tự
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Bước 2: Tìm tần suất làm mốc (từ ký tự đầu tiên của chuỗi s)
        int target = freq[s[0] - 'a'];

        // Bước 3: Kiểm tra xem các ký tự khác có cùng tần suất không
        for (int i = 0; i < 26; i++) {
            // Chỉ kiểm tra những ký tự có xuất hiện (tần suất > 0)
            if (freq[i] > 0 && freq[i] != target) {
                return false;
            }
        }

        return true;
    }
};
// MSSV/HoTen - Bai 039
