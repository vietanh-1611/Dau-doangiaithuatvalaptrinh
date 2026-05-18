class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;

            // Kiểm tra xem nửa bên trái [left...mid] có được sắp xếp không
            if (nums[left] <= nums[mid]) {
                // Nửa trái sắp xếp chuẩn, kiểm tra target có nằm trong khoảng này không
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1; // Thu hẹp về bên trái
                } else {
                    left = mid + 1;  // Tìm bên phải
                }
            } 
            // Ngược lại, nửa bên phải [mid...right] chắc chắn được sắp xếp
            else {
                // Kiểm tra target có nằm trong khoảng bên phải không
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;  // Thu hẹp về bên phải
                } else {
                    right = mid - 1; // Tìm bên trái
                }
            }
        }

        return -1; // Không tìm thấy
    }
};
// MSSV/HoTen - Bai 099
