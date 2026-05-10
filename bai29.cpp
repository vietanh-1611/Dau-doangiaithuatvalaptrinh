class Solution {
public:
    int divide(int dividend, int divisor) {
        // Xử lý overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Xác định dấu
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);

        int result = 0;

        while (dvd >= dvs) {
            long long temp = dvs;
            int multiple = 1;

            // Nhân đôi divisor
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        return negative ? -result : result;
    }
};