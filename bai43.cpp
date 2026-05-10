class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> res(n + m, 0);

        // Nhân từng cặp chữ số
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                // Chuyển ký tự thành số và nhân
                int mul = (num1[i] - '0') * (num2[j] - '0');
                
                // Vị trí lưu tích tạm thời
                int p1 = i + j;
                int p2 = i + j + 1;
                
                int sum = mul + res[p2];

                res[p2] = sum % 10;   // Lưu hàng đơn vị
                res[p1] += sum / 10;  // Cộng dồn phần dư vào vị trí phía trước
            }
        }

        // Chuyển mảng số thành chuỗi kết quả
        string ans = "";
        for (int p : res) {
            // Bỏ qua các số 0 ở đầu (nếu có)
            if (!(ans.length() == 0 && p == 0)) {
                ans += to_string(p);
            }
        }

        return ans.length() == 0 ? "0" : ans;
    }
};