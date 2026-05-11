class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        // XOR tất cả ký tự trong s
        for (char c : s) result ^= c;
        // XOR tất cả ký tự trong t
        for (char c : t) result ^= c;
        
        return result;
    }
};
// MSSV/HoTen - Bai 021
