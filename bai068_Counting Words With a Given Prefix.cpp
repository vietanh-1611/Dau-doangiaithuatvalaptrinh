class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (const string& w : words) {
            // Kiểm tra xem pref có xuất hiện tại vị trí 0 của từ w hay không
            if (w.find(pref) == 0) {
                count++;
            }
        }
        return count;
    }
};
// MSSV/HoTen - Bai 068
