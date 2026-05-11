class Solution {
public:
    // Hàm phụ để tính tổng các chữ số
    int getDigitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            // Kiểm tra nếu tổng chữ số là số chẵn
            if (getDigitSum(i) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
// MSSV/HoTen - Bai 067
