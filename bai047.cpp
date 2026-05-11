class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // Bước 1: Xác định chỉ số cột cần kiểm tra dựa trên ruleKey
        int index = 0;
        if (ruleKey == "type") {
            index = 0;
        } else if (ruleKey == "color") {
            index = 1;
        } else if (ruleKey == "name") {
            index = 2;
        }
        
        int count = 0;
        // Bước 2: Duyệt qua từng vật phẩm trong danh sách
        for (const auto& item : items) {
            // Bước 3: So sánh giá trị tại chỉ số đã xác định với ruleValue
            if (item[index] == ruleValue) {
                count++;
            }
        }
        
        return count;
    }
};
// MSSV/HoTen - Bai 047
