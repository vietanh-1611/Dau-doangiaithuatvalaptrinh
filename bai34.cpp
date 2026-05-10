class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        
        // Tìm vị trí đầu tiên
        result[0] = findBound(nums, target, true);
        
        // Nếu không tìm thấy vị trí đầu tiên, chắc chắn không có vị trí cuối cùng
        if (result[0] != -1) {
            result[1] = findBound(nums, target, false);
        }
        
        return result;
    }

private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int left = 0, right = nums.size() - 1;
        int bound = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                bound = mid; // Tạm ghi nhận vị trí này
                if (isFirst) {
                    // Nếu tìm vị trí đầu tiên, tiếp tục thu hẹp về bên trái
                    right = mid - 1;
                } else {
                    // Nếu tìm vị trí cuối cùng, tiếp tục thu hẹp về bên phải
                    left = mid + 1;
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return bound;
    }
};