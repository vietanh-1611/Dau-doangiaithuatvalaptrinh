class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Tách chuỗi s thành danh sách các từ
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        // Nếu số lượng ký tự trong pattern khác số lượng từ trong s
        if (pattern.length() != words.size()) {
            return false;
        }

        // Hai bảng băm để kiểm tra quan hệ song ánh
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern[i];
            string w = words[i];

            // Kiểm tra chiều: Ký tự -> Từ
            if (charToWord.count(c)) {
                if (charToWord[c] != w) return false;
            } else {
                charToWord[c] = w;
            }

            // Kiểm tra chiều: Từ -> Ký tự
            if (wordToChar.count(w)) {
                if (wordToChar[w] != c) return false;
            } else {
                wordToChar[w] = c;
            }
        }

        return true;
    }
};
// MSSV/HoTen - Bai 020
