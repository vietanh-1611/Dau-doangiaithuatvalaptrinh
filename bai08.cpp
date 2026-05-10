class Solution {
public:
    int myAtoi(string s) {
         int i = 0;
        int n = s.size();
        
        // 1. Bỏ khoảng trắng đầu
        while (i < n && s[i] == ' ')
            i++;
        
        // 2. Kiểm tra chuỗi rỗng
        if (i == n) return 0;

        // 3. Xử lý dấu
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (s[i] == '+') {
            i++;
        }

        int result = 0;

        // 4. Đọc số
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 5. Kiểm tra overflow trước khi nhân 10
            if (result > INT_MAX / 10 || 
               (result == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};