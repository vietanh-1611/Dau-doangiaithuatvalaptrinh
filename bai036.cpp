class Solution {
public:
    string thousandSeparator(int n) {
        // Trường hợp đặc biệt nếu n là 0
        if (n == 0) return "0";
        
        string s = to_string(n);
        string res = "";
        int count = 0;
        
        // Duyệt ngược từ cuối chuỗi số
        for (int i = s.length() - 1; i >= 0; i--) {
            res += s[i];
            count++;
            
            // Nếu đã đếm đủ 3 chữ số và đây chưa phải là chữ số cuối cùng bên trái
            if (count % 3 == 0 && i > 0) {
                res += ".";
            }
        }
        
        // Đảo ngược chuỗi kết quả để về đúng thứ tự
        reverse(res.begin(), res.end());
        
        return res;
    }
};
// MSSV/HoTen - Bai 036
