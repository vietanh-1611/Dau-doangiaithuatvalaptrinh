class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Bước 1: Lưu các loại đá quý vào một unordered_set để tìm kiếm nhanh
        unordered_set<char> jewelSet;
        for (char j : jewels) {
            jewelSet.insert(j);
        }

        int count = 0;
        // Bước 2: Duyệt qua từng viên đá bạn đang có
        for (char s : stones) {
            // Nếu viên đá s nằm trong bộ sưu tập đá quý
            if (jewelSet.count(s)) {
                count++;
            }
        }

        return count;
    }
};
// MSSV/HoTen - Bai 028
