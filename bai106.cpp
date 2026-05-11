class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Sử dụng một unordered_map để lưu {giá trị: chỉ số}
        unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++) {
            // Nếu tìm thấy nums[i] trong map
            if (m.count(nums[i])) {
                // Kiểm tra khoảng cách có nhỏ hơn hoặc bằng k không
                if (i - m[nums[i]] <= k) {
                    return true;
                }
            }
            // Cập nhật vị trí mới nhất của phần tử
            m[nums[i]] = i;
        }
        
        return false;
    }
};
// MSSV/HoTen - Bai 106
