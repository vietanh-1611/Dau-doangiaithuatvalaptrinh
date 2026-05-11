class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // Mảng đếm tần suất cho các số từ 1 đến 500
        int count[501] = {0};
        
        // Bước 1: Thống kê số lần xuất hiện của mỗi phần tử
        for (int x : nums) {
            count[x]++;
        }
        
        // Bước 2: Kiểm tra xem có tần suất nào lẻ không
        for (int i = 1; i <= 500; i++) {
            if (count[i] % 2 != 0) {
                return false; // Tìm thấy số lẻ lần xuất hiện, không thể ghép cặp hết
            }
        }
        
        return true;
    }
};
// MSSV/HoTen - Bai 070
