class Solution {
public:
    int minimumSum(int num) {
        // Bước 1: Tách các chữ số vào mảng
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // Bước 2: Sắp xếp các chữ số tăng dần
        sort(digits.begin(), digits.end());
        
        // Bước 3: Tạo 2 số mới
        // Hai số nhỏ nhất (digits[0], digits[1]) làm hàng chục
        // Hai số lớn hơn (digits[2], digits[3]) làm hàng đơn vị
        int new1 = digits[0] * 10 + digits[2];
        int new2 = digits[1] * 10 + digits[3];
        
        return new1 + new2;
    }
};
// MSSV/HoTen - Bai 063
