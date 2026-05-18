class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string result = "";
        
        while (ss >> word) {
            // Bước 1: Chuyển toàn bộ từ về chữ thường
            for (char &c : word) {
                c = tolower(c);
            }
            
            // Bước 2: Nếu độ dài > 2, viết hoa chữ cái đầu
            if (word.length() > 2) {
                word[0] = toupper(word[0]);
            }
            
            // Bước 3: Thêm vào chuỗi kết quả
            if (result != "") {
                result += " ";
            }
            result += word;
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 058
