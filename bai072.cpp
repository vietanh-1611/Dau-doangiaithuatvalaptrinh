class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // Bước 1: Tạo các tập hợp để loại bỏ trùng lặp và tìm kiếm nhanh O(1)
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> diff1, diff2;
        
        // Bước 2: Tìm phần tử có trong set1 nhưng không có trong set2
        for (int x : set1) {
            if (set2.find(x) == set2.end()) {
                diff1.push_back(x);
            }
        }
        
        // Bước 3: Tìm phần tử có trong set2 nhưng không có trong set1
        for (int x : set2) {
            if (set1.find(x) == set1.end()) {
                diff2.push_back(x);
            }
        }
        
        return {diff1, diff2};
    }
};
// MSSV/HoTen - Bai 072
