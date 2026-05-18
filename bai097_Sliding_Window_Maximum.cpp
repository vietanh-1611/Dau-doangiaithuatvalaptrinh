class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // Tìm thấy target, trả về chỉ mục ngay
            } else if (nums[mid] < target) {
                left = mid + 1; // Target lớn hơn, tìm ở nửa bên phải
            } else {
                right = mid - 1; // Target nhỏ hơn, tìm ở nửa bên trái
            }
        }

        // Khi vòng lặp kết thúc mà không tìm thấy, 'left' chính là 
        // vị trí chèn phù hợp để giữ mảng luôn được sắp xếp.
        return left;
    }
};
// MSSV/HoTen - Bai 097
