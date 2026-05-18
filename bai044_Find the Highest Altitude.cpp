class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;     // Lưu kỷ lục độ cao cao nhất
        int currentAltitude = 0; // Độ cao tại điểm đang đứng
        
        for (int g : gain) {
            // Tính độ cao của điểm tiếp theo
            currentAltitude += g;
            
            // Cập nhật nếu điểm này cao hơn kỷ lục cũ
            if (currentAltitude > maxAltitude) {
                maxAltitude = currentAltitude;
            }
        }
        
        return maxAltitude;
    }
};
// MSSV/HoTen - Bai 044
