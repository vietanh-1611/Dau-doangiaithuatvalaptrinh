class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // 1. Tính tổng lý thuyết từ 0 đến n
        // Công thức: n * (n + 1) / 2
        int expectedSum = n * (n + 1) / 2;
        
        // 2. Tính tổng thực tế của mảng nums
        int actualSum = 0;
        for (int x : nums) {
            actualSum += x;
        }
        
        // 3. Số bị thiếu là phần chênh lệch
        return expectedSum - actualSum;
    }
};