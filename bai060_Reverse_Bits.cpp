class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // Bước 1: Sắp xếp giảm dần
        sort(cost.rbegin(), cost.rend());
        
        int totalSum = 0;
        int n = cost.size();
        
        // Bước 2: Duyệt qua mảng
        for (int i = 0; i < n; i++) {
            // Cứ mỗi phần tử thứ 3 (chỉ số 2, 5, 8...) thì bỏ qua
            // Các phần tử i % 3 == 0 và i % 3 == 1 là kẹo phải mua
            if (i % 3 != 2) {
                totalSum += cost[i];
            }
        }
        
        return totalSum;
    }
};
// MSSV/HoTen - Bai 060
