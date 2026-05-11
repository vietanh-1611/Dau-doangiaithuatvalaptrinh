class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // Bước 1: Sắp xếp danh sách cân nặng tăng dần
        sort(people.begin(), people.end());
        
        int i = 0; // Con trỏ cho người nhẹ nhất
        int j = people.size() - 1; // Con trỏ cho người nặng nhất
        int boats = 0;
        
        while (i <= j) {
            // Người nặng nhất (people[j]) luôn được xếp lên thuyền
            // Nếu người nhẹ nhất (people[i]) có thể đi cùng:
            if (people[i] + people[j] <= limit) {
                i++; // Ghép cặp thành công, xét người nhẹ tiếp theo
            }
            
            // Dù có ghép được hay không, người nặng nhất vẫn phải đi
            j--; 
            boats++; // Tốn một chiếc thuyền cho lượt này
        }
        
        return boats;
    }
};
// MSSV/HoTen - Bai 082
