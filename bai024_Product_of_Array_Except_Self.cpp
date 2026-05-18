class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Bước 1: Sắp xếp cả hai mảng
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child_i = 0; // Con trỏ cho danh sách trẻ em
        int cookie_j = 0; // Con trỏ cho danh sách bánh quy

        // Bước 2: Duyệt qua cả hai mảng
        while (child_i < g.size() && cookie_j < s.size()) {
            // Nếu bánh quy j đủ lớn cho đứa trẻ i
            if (s[cookie_j] >= g[child_i]) {
                child_i++; // Đứa trẻ này đã hạnh phúc, chuyển sang đứa trẻ tiếp theo
            }
            // Luôn luôn chuyển sang chiếc bánh quy tiếp theo
            cookie_j++;
        }

        // Số lượng trẻ em hạnh phúc chính là vị trí của con trỏ child_i
        return child_i;
    }
};
// MSSV/HoTen - Bai 024
