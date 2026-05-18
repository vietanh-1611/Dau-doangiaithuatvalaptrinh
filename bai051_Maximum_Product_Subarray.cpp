class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        // Duyệt qua từng chỉ số từ nhỏ đến lớn
        for (int i = 0; i < nums.size(); i++) {
            // Kiểm tra điều kiện số dư khi chia cho 10
            if (i % 10 == nums[i]) {
                return i; // Trả về ngay chỉ số nhỏ nhất tìm thấy
            }
        }
        
        // Nếu không có chỉ số nào thỏa mãn
        return -1;
    }
};
// MSSV/HoTen - Bai 051
