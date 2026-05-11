class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // Trường hợp x = 0 hoặc x = 1

        int left = 1, right = x / 2;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Sử dụng phép chia x / mid để tránh tràn số (overflow) 
            // thay vì dùng mid * mid
            if (mid <= x / mid) {
                ans = mid;     // Tạm thời ghi nhận mid là kết quả tiềm năng
                left = mid + 1; // Thử tìm số lớn hơn ở bên phải
            } else {
                right = mid - 1; // Số hiện tại quá lớn, tìm ở bên trái
            }
        }

        return ans;
    }
};
// MSSV/HoTen - Bai 101
