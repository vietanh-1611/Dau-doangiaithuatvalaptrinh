// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            // Tránh tràn số nguyên khi n rất lớn (2^31 - 1)
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                // Nếu mid hỏng, điểm hỏng đầu tiên có thể là mid 
                // hoặc ở phía trước mid.
                right = mid; 
            } else {
                // Nếu mid còn tốt, chắc chắn điểm hỏng đầu tiên ở sau mid.
                left = mid + 1;
            }
        }
        
        // Khi kết thúc vòng lặp, left == right và trỏ vào phiên bản hỏng đầu tiên.
        return left;
    }
};
// MSSV/HoTen - Bai 102
