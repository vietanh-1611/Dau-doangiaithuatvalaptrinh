class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;

        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        unordered_map<string, int> wordMap;

        // Đếm số lần xuất hiện của mỗi word
        for (string w : words) {
            wordMap[w]++;
        }

        for (int i = 0; i <= (int)s.length() - totalLen; i++) {
            unordered_map<string, int> seen;
            int j = 0;

            while (j < wordCount) {
                string word = s.substr(i + j * wordLen, wordLen);

                if (wordMap.find(word) == wordMap.end()) break;

                seen[word]++;
                if (seen[word] > wordMap[word]) break;

                j++;
            }

            if (j == wordCount) {
                result.push_back(i);
            }
        }

        return result;
    }
};