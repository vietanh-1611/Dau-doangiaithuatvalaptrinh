class Solution {
public:
    string removeDuplicates(string s) {
        string res = ""; // Sử dụng chuỗi này như một ngăn xếp (stack)
        
        for (char c : s) {
            // Nếu ký tự hiện tại giống ký tự cuối cùng trong 'res'
            if (!res.empty() && c == res.back()) {
                // Xóa ký tự cuối cùng (loại bỏ cặp trùng lặp)
                res.pop_back();
            } else {
                // Thêm ký tự hiện tại vào cuối
                res.push_back(c);
            }
        }
        
        return res;
    }
};
// MSSV/HoTen - Bai 091
