class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        // Bước 1: Tạo một vector chứa cặp {chiều cao, tên}
        vector<pair<int, string>> people;
        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }

        // Bước 2: Sắp xếp giảm dần theo chiều cao
        // Sử dụng lambda function để so sánh
        sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first; // So sánh chiều cao (first)
        });

        // Bước 3: Trích xuất tên đã được sắp xếp vào mảng kết quả
        vector<string> result;
        for (int i = 0; i < n; i++) {
            result.push_back(people[i].second);
        }

        return result;
    }
};
// MSSV/HoTen - Bai 040
