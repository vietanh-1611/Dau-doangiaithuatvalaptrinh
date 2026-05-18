class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        
        // Bước 1: Đưa tất cả các số khác 0 lên đầu mảng
        for (int cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                nums[lastNonZeroFoundAt] = nums[cur];
                lastNonZeroFoundAt++;
            }
        }
        
        // Bước 2: Lấp đầy khoảng trống còn lại bằng số 0
        for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
// MSSV/HoTen - Bai 087
