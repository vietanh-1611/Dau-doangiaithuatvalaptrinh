class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        int n = s.length();
        int numWords = words.size();
        int wordLen = words[0].length();
        int totalLen = numWords * wordLen;

        if (n < totalLen) return result;

        // Đếm tần suất các từ mục tiêu
        unordered_map<string, int> wordCounts;
        for (const string& w : words) {
            wordCounts[w]++;
        }

        // Chạy cửa sổ trượt bắt đầu từ mỗi offset từ 0 đến wordLen - 1
        for (int i = 0; i < wordLen; i++) {
            int left = i;
            int count = 0;
            unordered_map<string, int> windowCounts;

            for (int j = i; j <= n - wordLen; j += wordLen) {
                string word = s.substr(j, wordLen);
                
                if (wordCounts.count(word)) {
                    windowCounts[word]++;
                    count++;

                    // Nếu từ này xuất hiện nhiều hơn số lượng cho phép, trượt 'left' sang phải
                    while (windowCounts[word] > wordCounts[word]) {
                        string leftWord = s.substr(left, wordLen);
                        windowCounts[leftWord]--;
                        count--;
                        left += wordLen;
                    }

                    // Nếu tìm đủ số lượng từ
                    if (count == numWords) {
                        result.push_back(left);
                    }
                } else {
                    // Từ không nằm trong danh sách, reset cửa sổ
                    windowCounts.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }

        return result;
    }
};