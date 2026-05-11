class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // Cách tính mid này giúp tránh tràn số (overflow) so với (left + right) / 2
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Tìm thấy mục tiêu
            } 
            else if (nums[mid] < target) {
                left = mid + 1; // Tìm ở nửa bên phải
            } 
            else {
                right = mid - 1; // Tìm ở nửa bên trái
            }
        }
        
        return -1; // Không tìm thấy
    }
};
// MSSV/HoTen - Bai 095
