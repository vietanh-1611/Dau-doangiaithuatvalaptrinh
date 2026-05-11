class Solution {
public:
    string reformatNumber(string number) {
        // Bước 1: Loại bỏ các ký tự không phải số
        string digits = "";
        for (char c : number) {
            if (isdigit(c)) {
                digits += c;
            }
        }

        string result = "";
        int i = 0;
        int n = digits.length();

        // Bước 2: Nhóm khối 3 cho đến khi còn <= 4 chữ số
        while (n - i > 4) {
            result += digits.substr(i, 3) + "-";
            i += 3;
        }

        // Bước 3: Xử lý phần còn lại (2, 3 hoặc 4 chữ số)
        int remaining = n - i;
        if (remaining == 4) {
            // Chia 4 thành 2-2
            result += digits.substr(i, 2) + "-" + digits.substr(i + 2, 2);
        } else {
            // Trường hợp 2 hoặc 3 chữ số thì giữ nguyên khối đó
            result += digits.substr(i);
        }

        return result;
    }
};
// MSSV/HoTen - Bai 043
