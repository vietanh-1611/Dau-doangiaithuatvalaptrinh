class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigitCount = 0;
        
        for (int n : nums) {
            // Dựa trên ràng buộc 1 <= nums[i] <= 10^5
            // Các số có chữ số chẵn là:
            // 2 chữ số: [10, 99]
            // 4 chữ số: [1000, 9999]
            // 6 chữ số: 100000 (nhưng giới hạn là 10^5 nên chỉ xét đến đây)
            
            if ((n >= 10 && n <= 99) || 
                (n >= 1000 && n <= 9999) || 
                (n == 100000)) {
                evenDigitCount++;
            }
        }
        
        return evenDigitCount;
    }
};
// MSSV/HoTen - Bai 042
