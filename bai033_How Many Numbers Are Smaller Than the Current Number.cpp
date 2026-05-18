class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Bước 1: Đếm tần suất (giới hạn đề bài là 0-100)
        int count[101] = {0};
        for (int x : nums) {
            count[x]++;
        }

        // Bước 2: Tính tổng cộng dồn
        // prev_sum[i] sẽ lưu số lượng các phần tử nhỏ hơn i
        int smaller[101] = {0};
        int current_sum = 0;
        for (int i = 0; i <= 100; i++) {
            smaller[i] = current_sum;
            current_sum += count[i];
        }

        // Bước 3: Tạo mảng kết quả
        vector<int> result;
        for (int x : nums) {
            result.push_back(smaller[x]);
        }

        return result;
    }
};
// MSSV/HoTen - Bai 033
