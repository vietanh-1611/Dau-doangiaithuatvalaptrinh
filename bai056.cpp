class Solution {
public:
    int res = 0;
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        
        for (const string& s : sentences) {
            int spaces = 0;
            // Duyệt qua từng ký tự trong câu để đếm khoảng trắng
            for (char c : s) {
                if (c == ' ') {
                    spaces++;
                }
            }
            
            // Số từ = số khoảng trắng + 1
            int currentWords = spaces + 1;
            
            // Cập nhật giá trị lớn nhất
            if (currentWords > maxWords) {
                maxWords = currentWords;
            }
        }
        
        return maxWords;
    }
};
// MSSV/HoTen - Bai 056
