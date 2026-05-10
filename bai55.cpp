class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;

        for (int i = 0; i < n; i++) {
            // Nếu vị trí hiện tại nằm ngoài tầm với xa nhất đã biết
            if (i > farthest) {
                return false;
            }

            // Cập nhật tầm với xa nhất mới
            farthest = max(farthest, i + nums[i]);

            // Nếu tầm với đã bao phủ hoặc vượt qua đích
            if (farthest >= n - 1) {
                return true;
            }
        }

        return false;
    }
};