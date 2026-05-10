class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int totalWater = 0;

        while (left < right) {
            // Luôn xử lý bên có cột thấp hơn để đảm bảo lượng nước 
            // được giữ lại chỉ phụ thuộc vào ranh giới thấp nhất.
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left]; // Cập nhật cột cao nhất bên trái
                } else {
                    totalWater += leftMax - height[left]; // Tính nước bị giữ
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right]; // Cập nhật cột cao nhất bên phải
                } else {
                    totalWater += rightMax - height[right]; // Tính nước bị giữ
                }
                right--;
            }
        }

        return totalWater;
    }
};