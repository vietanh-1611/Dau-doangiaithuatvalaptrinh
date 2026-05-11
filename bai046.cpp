class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // Bước 1: Khai báo mảng đếm tần suất (do nums[i] <= 100)
        int count[101] = {0};
        
        // Bước 2: Duyệt mảng để đếm số lần xuất hiện
        for (int x : nums) {
            count[x]++;
        }
        
        int totalSum = 0;
        // Bước 3: Duyệt qua mảng đếm, chỉ cộng các số xuất hiện đúng 1 lần
        for (int i = 1; i <= 100; i++) {
            if (count[i] == 1) {
                totalSum += i;
            }
        }
        
        return totalSum;
    }
};
// MSSV/HoTen - Bai 046
