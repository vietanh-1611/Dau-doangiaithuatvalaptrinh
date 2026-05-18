class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // Chuyển mảng sang tập hợp để tìm kiếm nhanh
        unordered_set<int> s(nums.begin(), nums.end());
        
        // Vòng lặp kiểm tra và nhân đôi
        while (s.count(original)) {
            original *= 2;
        }
        
        return original;
    }
};
// MSSV/HoTen - Bai 062
