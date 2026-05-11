class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // Bước 1: Nén mảng (loại bỏ các phần tử trùng lặp liên tiếp)
        vector<int> uniqueNums;
        uniqueNums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                uniqueNums.push_back(nums[i]);
            }
        }

        int count = 0;
        int n = uniqueNums.size();

        // Bước 2: Duyệt mảng đã nén để tìm Hill và Valley
        // Bỏ qua phần tử đầu và cuối vì chúng không có đủ 2 bên lân cận
        for (int i = 1; i < n - 1; i++) {
            // Kiểm tra Hill: trái < hiện tại > phải
            if (uniqueNums[i] > uniqueNums[i - 1] && uniqueNums[i] > uniqueNums[i + 1]) {
                count++;
            }
            // Kiểm tra Valley: trái > hiện tại < phải
            else if (uniqueNums[i] < uniqueNums[i - 1] && uniqueNums[i] < uniqueNums[i + 1]) {
                count++;
            }
        }

        return count;
    }
};
// MSSV/HoTen - Bai 071
