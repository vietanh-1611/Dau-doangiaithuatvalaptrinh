class Solution {
public:
    int countElements(vector<int>& nums) {
        if (nums.size() < 3) return 0; // Cần ít nhất 3 phần tử để có thể thỏa mãn
        
        int min_val = nums[0];
        int max_val = nums[0];
        
        // Bước 1: Tìm min và max của mảng
        for (int x : nums) {
            if (x < min_val) min_val = x;
            if (x > max_val) max_val = x;
        }
        
        int count = 0;
        // Bước 2: Đếm các phần tử nằm trong khoảng (min_val, max_val)
        for (int x : nums) {
            if (x > min_val && x < max_val) {
                count++;
            }
        }
        
        return count;
    }
};
// MSSV/HoTen - Bai 061
