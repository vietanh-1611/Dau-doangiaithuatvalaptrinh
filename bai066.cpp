class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        // Duyệt qua tất cả các cặp (i, j) với 0 <= i < j < n
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Điều kiện 1: Giá trị tại hai chỉ số bằng nhau
                if (nums[i] == nums[j]) {
                    // Điều kiện 2: Tích của hai chỉ số chia hết cho k
                    if ((i * j) % k == 0) {
                        count++;
                    }
                }
            }
        }
        
        return count;
    }
};
// MSSV/HoTen - Bai 066
