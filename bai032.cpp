class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        result.reserve(n);
        
        // Duyệt từ 1 đến n/2
        for (int i = 1; i <= n / 2; i++) {
            result.push_back(i);    // Thêm số dương
            result.push_back(-i);   // Thêm số âm đối xứng
        }
        
        // Nếu n lẻ, thêm số 0 vào để đủ số lượng n
        if (n % 2 != 0) {
            result.push_back(0);
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 032
