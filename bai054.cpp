class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> count1;
        unordered_map<string, int> count2;

        // Bước 1: Đếm tần suất các từ trong words1
        for (const string& w : words1) {
            count1[w]++;
        }

        // Bước 2: Đếm tần suất các từ trong words2
        for (const string& w : words2) {
            count2[w]++;
        }

        int result = 0;
        // Bước 3: Tìm các từ có tần suất bằng 1 ở cả hai bên
        for (auto const& [word, freq] : count1) {
            if (freq == 1 && count2[word] == 1) {
                result++;
            }
        }

        return result;
    }
};
// MSSV/HoTen - Bai 054
