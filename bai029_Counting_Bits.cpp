class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        string vowels = "aeiouAEIOU";
        int wordIndex = 1;

        while (ss >> word) {
            // Nếu có nhiều hơn 1 từ, thêm dấu cách trước khi nối từ tiếp theo
            if (wordIndex > 1) result += " ";

            // Kiểm tra xem chữ cái đầu có phải nguyên âm không
            if (vowels.find(word[0]) != string::npos) {
                // Luật 1: Nguyên âm
                result += word + "ma";
            } else {
                // Luật 2: Phụ âm
                result += word.substr(1) + word[0] + "ma";
            }

            // Luật 3: Thêm 'a' theo chỉ số từ
            result += string(wordIndex, 'a');
            
            wordIndex++;
        }

        return result;
    }
};
// MSSV/HoTen - Bai 029
