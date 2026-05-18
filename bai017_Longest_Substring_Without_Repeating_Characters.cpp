class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int current_count = 0;
        
        for (int n : nums) {
            if (n == 1) {
                // Tăng biến đếm khi gặp số 1
                current_count++;
            } else {
                // Khi gặp số 0, cập nhật max và reset biến đếm
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }
        
        // Kiểm tra lần cuối sau khi kết thúc vòng lặp
        return max(max_count, current_count);
    }
};
// MSSV/HoTen - Bai 017
