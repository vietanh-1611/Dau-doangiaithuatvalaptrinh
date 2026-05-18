class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Duyệt ngược từ cuối mảng lên đầu
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // Nếu chữ số < 9, chỉ cần cộng 1 và kết thúc
                digits[i]++;
                return digits;
            }
            // Nếu chữ số là 9, nó trở thành 0 và tiếp tục vòng lặp (nhớ 1)
            digits[i] = 0;
        }

        // Nếu chạy hết vòng lặp, nghĩa là số ban đầu toàn chữ số 9 (vd: 999)
        // Kết quả sẽ là 1000. Ta chèn 1 vào đầu mảng.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};