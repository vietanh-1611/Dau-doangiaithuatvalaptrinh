class Solution {
public:
    int pivotInteger(int n) {
        int sumTotal = n * (n + 1) / 2;
        int x = sqrt(sumTotal);
        
        // Kiểm tra xem bình phương của x có bằng tổng không
        if (x * x == sumTotal) {
            return x;
        }
        
        return -1;
    }
};
// MSSV/HoTen - Bai 105
