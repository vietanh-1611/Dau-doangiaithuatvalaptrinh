class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> outgoingCities;
        
        // Bước 1: Lưu tất cả thành phố có đường đi ra
        for (const auto& path : paths) {
            outgoingCities.insert(path[0]);
        }
        
        // Bước 2: Tìm thành phố xuất hiện ở đích (path[1]) 
        // nhưng không có trong danh sách đường đi ra
        for (const auto& path : paths) {
            if (outgoingCities.find(path[1]) == outgoingCities.end()) {
                return path[1];
            }
        }
        
        return "";
    }
};
// MSSV/HoTen - Bai 034
