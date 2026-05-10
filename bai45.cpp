class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;          // Số bước nhảy đã thực hiện
        int current_end = 0;    // Ranh giới xa nhất của bước nhảy hiện tại
        int farthest = 0;       // Điểm xa nhất có thể đạt được cho bước nhảy tiếp theo

        // Chúng ta không cần duyệt đến phần tử cuối cùng (n-1) 
        // vì khi đã đứng ở n-1 rồi thì không cần nhảy thêm nữa.
        for (int i = 0; i < n - 1; i++) {
            // Cập nhật điểm xa nhất có thể tới từ vị trí i
            farthest = max(farthest, i + nums[i]);

            // Nếu đã đi hết phạm vi của bước nhảy hiện tại
            if (i == current_end) {
                jumps++;                // Tăng số bước nhảy
                current_end = farthest; // Cập nhật ranh giới mới

                // Tối ưu: Nếu ranh giới đã bao phủ điểm cuối, thoát sớm
                if (current_end >= n - 1) break;
            }
        }

        return jumps;
    }
};