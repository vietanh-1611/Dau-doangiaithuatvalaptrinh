class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDist = 0;

        // Trường hợp 1: So sánh với ngôi nhà đầu tiên (colors[0])
        for (int i = n - 1; i > 0; i--) {
            if (colors[i] != colors[0]) {
                maxDist = max(maxDist, i); // Khoảng cách là i - 0
                break;
            }
        }

        // Trường hợp 2: So sánh với ngôi nhà cuối cùng (colors[n-1])
        for (int i = 0; i < n - 1; i++) {
            if (colors[i] != colors[n - 1]) {
                maxDist = max(maxDist, (n - 1) - i); // Khoảng cách là (n-1) - i
                break;
            }
        }

        return maxDist;
    }
};
// MSSV/HoTen - Bai 053
