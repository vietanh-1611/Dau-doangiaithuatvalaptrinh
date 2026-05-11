class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> evenIndices, oddIndices;
        int n = nums.size();

        // Bước 1: Tách các phần tử theo chỉ số chẵn và lẻ
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evenIndices.push_back(nums[i]);
            } else {
                oddIndices.push_back(nums[i]);
            }
        }

        // Bước 2: Sắp xếp theo yêu cầu
        // Chẵn: Tăng dần
        sort(evenIndices.begin(), evenIndices.end());
        // Lẻ: Giảm dần
        sort(oddIndices.begin(), oddIndices.end(), greater<int>());

        // Bước 3: Ghép lại vào mảng nums
        int eIdx = 0, oIdx = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = evenIndices[eIdx++];
            } else {
                nums[i] = oddIndices[oIdx++];
            }
        }

        return nums;
    }
};
// MSSV/HoTen - Bai 064
