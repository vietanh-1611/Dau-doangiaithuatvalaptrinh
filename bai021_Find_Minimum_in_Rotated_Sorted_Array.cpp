class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        
        for (int x : arr) {
            // Kiểm tra nếu gấp đôi hoặc một nửa của x đã xuất hiện
            if (seen.count(2 * x) || (x % 2 == 0 && seen.count(x / 2))) {
                return true;
            }
            // Thêm số hiện tại vào tập hợp để các số sau đối chiếu
            seen.insert(x);
        }
        
        return false;
    }
};
// MSSV/HoTen - Bai 104
