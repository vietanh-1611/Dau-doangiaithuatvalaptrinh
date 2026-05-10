class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Sử dụng vòng lặp while để đưa số hiện tại về đúng chỗ của nó
            // Điều kiện: 
            // 1. Số nằm trong khoảng [1, n]
            // 2. Số đó chưa nằm đúng vị trí (nums[i] != nums[nums[i] - 1])
            while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Sau khi sắp xếp, duyệt lại để tìm số đầu tiên sai vị trí
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // Nếu tất cả từ 1 đến n đều đúng chỗ, số thiếu là n + 1
        return n + 1;
    }
};