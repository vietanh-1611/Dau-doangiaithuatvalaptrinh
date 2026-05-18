class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Bảng băm: key là chuỗi đã sắp xếp, value là danh sách các từ đảo chữ
        unordered_map<string, vector<string>> groups;
        
        for (const string& s : strs) {
            string sorted_s = s;
            // Sắp xếp chuỗi để tạo ra "đặc điểm chung"
            sort(sorted_s.begin(), sorted_s.end());
            
            // Đưa từ gốc vào nhóm tương ứng
            groups[sorted_s].push_back(s);
        }
        
        // Chuyển kết quả từ map sang vector<vector<string>>
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 006
