class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0) return 0;
        if (duration == 0) return 0;

        int totalDuration = 0;
        
        // Duyệt từ đòn tấn công đầu tiên đến đòn áp chót
        for (int i = 0; i < n - 1; i++) {
            // Khoảng cách giữa đòn i và đòn i+1
            int gap = timeSeries[i + 1] - timeSeries[i];
            
            // Nếu khoảng cách nhỏ hơn duration, ta lấy gap
            // Nếu lớn hơn hoặc bằng, ta lấy trọn duration
            totalDuration += min(gap, duration);
        }
        
        // Cộng thêm thời gian nhiễm độc của đòn cuối cùng
        totalDuration += duration;
        
        return totalDuration;
    }
};
// MSSV/HoTen - Bai 025
