class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // Nếu chỉ có 1 người và không có quan hệ tin tưởng nào, người đó là thẩm phán
        if (trust.empty() && n == 1) return 1;

        // Mảng lưu trữ "điểm tin tưởng" của mỗi người (từ 1 đến n)
        vector<int> trust_score(n + 1, 0);

        for (auto& relation : trust) {
            int a = relation[0]; // Người đi tin tưởng
            int b = relation[1]; // Người được tin tưởng

            // Người đi tin tưởng người khác thì bị trừ điểm (vi phạm điều kiện 1)
            trust_score[a]--;
            // Người được người khác tin tưởng thì được cộng điểm (thỏa mãn điều kiện 2)
            trust_score[b]++;
        }

        // Kiểm tra xem có ai đạt được n - 1 điểm không
        for (int i = 1; i <= n; i++) {
            if (trust_score[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};