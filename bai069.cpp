class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        // Mảng đếm tần suất cho các số từ 1 đến 1000
        int counts[1001] = {0};
        int n = nums.size();
        
        // Bước 1: Duyệt mảng đến n-2 để kiểm tra cặp (nums[i], nums[i+1])
        for (int i = 0; i <= n - 2; i++) {
            if (nums[i] == key) {
                int target = nums[i + 1];
                counts[target]++;
            }
        }
        
        // Bước 2: Tìm số có tần suất xuất hiện sau key lớn nhất
        int maxCount = 0;
        int result = 0;
        for (int i = 0; i <= 1000; i++) {
            if (counts[i] > maxCount) {
                maxCount = counts[i];
                result = i;
            }
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 069
