class Solution {
public:
    double myPow(double x, int n) {
        // Sử dụng long long để tránh tràn số khi n = -2^31 đổi sang dương
        long long N = n;
        
        // Nếu số mũ âm, ta tính (1/x)^|n|
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        double current_product = x;
        
        while (N > 0) {
            // Nếu bit cuối cùng của N là 1 (số lẻ)
            if (N % 2 == 1) {
                result *= current_product;
            }
            // Bình phương cơ số và chia đôi số mũ
            current_product *= current_product;
            N /= 2;
        }
        
        return result;
    }
};