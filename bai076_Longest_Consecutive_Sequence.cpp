class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // Bước 1: Sắp xếp mảng tăng dần để dễ dàng lấy các số nhỏ nhất
        sort(nums.begin(), nums.end());
        
        // Bước 2: Duyệt qua mảng theo từng cặp 2 phần tử
        for (int i = 0; i < nums.size(); i += 2) {
            // Hoán đổi vị trí của phần tử Alice lấy và Bob lấy
            // nums[i] là số Alice lấy, nums[i+1] là số Bob lấy
            swap(nums[i], nums[i + 1]);
        }
        
        // Mảng nums sau khi hoán đổi chính là mảng arr cần tìm
        return nums;
    }
};
// MSSV/HoTen - Bai 076
