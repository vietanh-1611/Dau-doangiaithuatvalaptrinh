class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Bước 1: Tìm vị trí xuất hiện đầu tiên của ký tự ch
        int index = -1;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                index = i;
                break; // Chỉ lấy lần xuất hiện ĐẦU TIÊN
            }
        }
        
        // Bước 2: Nếu tìm thấy, thực hiện đảo ngược đoạn prefix
        if (index != -1) {
            // reverse nhận vào iterator bắt đầu và iterator kết thúc (không bao gồm)
            // Vì vậy ta dùng word.begin() + index + 1 để bao gồm cả ký tự ch
            reverse(word.begin(), word.begin() + index + 1);
        }
        
        return word;
    }
};
// MSSV/HoTen - Bai 083
