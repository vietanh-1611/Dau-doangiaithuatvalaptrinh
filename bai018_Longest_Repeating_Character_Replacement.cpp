class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Bước 1: Tính tổng toàn bộ mảng
        for (int x : nums) {
            totalSum += x;
        }
        
        // Bước 2: Duyệt qua từng chỉ số để kiểm tra điều kiện pivot
        for (int i = 0; i < nums.size(); i++) {
            // Kiểm tra: L == (Total - L - nums[i])
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i; // Trả về chỉ số pivot đầu tiên tìm thấy (leftmost)
            }
            
            // Cập nhật leftSum để dùng cho chỉ số i tiếp theo
            leftSum += nums[i];
        }
        
        return -1;
    }
};
// MSSV/HoTen - Bai 018
