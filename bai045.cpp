class Solution {
public:
    // Hàm phụ tính tổng các chữ số của một số
    int sumDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {
        // Mảng lưu số lượng bóng trong mỗi hộp (tối đa 45)
        int boxes[50] = {0};
        int maxBalls = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int boxIndex = sumDigits(i);
            boxes[boxIndex]++;
            
            // Cập nhật kỷ lục số bóng nhiều nhất ngay lập tức
            if (boxes[boxIndex] > maxBalls) {
                maxBalls = boxes[boxIndex];
            }
        }

        return maxBalls;
    }
};
// MSSV/HoTen - Bai 045
