class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        // Bước 1: Chuyển danh sách cấm vào set để tra cứu nhanh
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        
        // Bước 2: Làm sạch chuỗi (thay dấu câu bằng khoảng trắng và viết thường)
        for (char &c : paragraph) {
            if (ispunct(c)) {
                c = ' ';
            } else {
                c = tolower(c);
            }
        }
        
        // Bước 3: Tách từ và đếm tần suất
        unordered_map<string, int> countMap;
        stringstream ss(paragraph);
        string word;
        
        string result = "";
        int maxFreq = 0;
        
        while (ss >> word) {
            // Nếu từ không bị cấm
            if (bannedSet.find(word) == bannedSet.end()) {
                countMap[word]++;
                // Cập nhật từ xuất hiện nhiều nhất ngay lập tức
                if (countMap[word] > maxFreq) {
                    maxFreq = countMap[word];
                    result = word;
                }
            }
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 037
