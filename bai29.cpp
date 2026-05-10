class Solution {
public:
    int divide(int dividend, int divisor) {
        // Xử lý trường hợp tràn số duy nhất: -2^31 / -1 = 2^31 (vượt quá dải int)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Xác định dấu của kết quả
        bool negative = (dividend > 0) ^ (divisor > 0);

        // Chuyển sang số dương (dùng long long để tránh tràn số khi chuyển INT_MIN)
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long quotient = 0;

        while (a >= b) {
            long long temp = b, multiple = 1;
            // Tìm bội số lớn nhất của b (theo lũy thừa 2) mà vẫn <= a
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            // Trừ bội số đó khỏi a và cộng số lần tương ứng vào thương
            a -= temp;
            quotient += multiple;
        }

        return negative ? -quotient : quotient;
    }
};