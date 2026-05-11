class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        // Giả sử số đầu tiên là số gần 0 nhất
        int ans = nums[0];
        
        for (int x : nums) {
            // So sánh giá trị tuyệt đối (khoảng cách tới 0)
            if (abs(x) < abs(ans)) {
                ans = x;
            } 
            // Nếu khoảng cách bằng nhau, chọn số lớn hơn (số dương)
            else if (abs(x) == abs(ans)) {
                if (x > ans) {
                    ans = x;
                }
            }
        }
        
        return ans;
    }
};
// MSSV/HoTen - Bai 073
