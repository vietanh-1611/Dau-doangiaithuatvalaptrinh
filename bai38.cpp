class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string result = "1";
        
        // Lặp từ 1 đến n-1 để xây dựng chuỗi thứ n
        for (int i = 1; i < n; i++) {
            result = getNext(result);
        }
        
        return result;
    }

private:
    string getNext(string s) {
        string res = "";
        int i = 0;
        
        while (i < s.length()) {
            int count = 1;
            char digit = s[i];
            
            // Đếm xem có bao nhiêu chữ số giống nhau liên tiếp
            while (i + 1 < s.length() && s[i + 1] == digit) {
                count++;
                i++;
            }
            
            // Thêm "số lượng" + "chữ số đó" vào chuỗi kết quả
            res += to_string(count) + digit;
            i++;
        }
        
        return res;
    }
};