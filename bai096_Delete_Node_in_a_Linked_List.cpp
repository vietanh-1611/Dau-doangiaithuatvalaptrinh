class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // So sánh phần tử giữa với phần tử cuối cùng của phạm vi hiện tại
            if (nums[mid] > nums[right]) {
                // Điểm nhỏ nhất nằm ở bên phải mid
                left = mid + 1;
            } else {
                // mid có thể là điểm nhỏ nhất, hoặc điểm nhỏ nhất nằm bên trái mid
                right = mid;
            }
        }
        
        // Sau khi vòng lặp kết thúc, left == right và trỏ vào phần tử nhỏ nhất
        return nums[left];
    }
};
// MSSV/HoTen - Bai 098
