class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // Bước 1: Sắp xếp mảng tăng dần
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        // Bước 2: Tìm các chỉ số có giá trị bằng target
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 055
