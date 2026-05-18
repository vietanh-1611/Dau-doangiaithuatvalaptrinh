class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // Map lưu trữ: {Tổng a + b : Số lần xuất hiện}
        unordered_map<int, int> sumAB;
        int count = 0;

        // Bước 1: Duyệt qua nums1 và nums2 để tính tất cả các tổng có thể
        for (int a : nums1) {
            for (int b : nums2) {
                sumAB[a + b]++;
            }
        }

        // Bước 2: Duyệt qua nums3 và nums4
        for (int c : nums3) {
            for (int d : nums4) {
                // Chúng ta cần: (a + b) + (c + d) = 0 => (a + b) = -(c + d)
                int target = -(c + d);
                
                // Nếu tìm thấy target trong Map, cộng số lần xuất hiện của nó vào kết quả
                if (sumAB.count(target)) {
                    count += sumAB[target];
                }
            }
        }

        return count;
    }
};
// MSSV/HoTen - Bai 023
