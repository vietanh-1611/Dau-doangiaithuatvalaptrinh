class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0);
        int i = 0;      // Chỉ số người nhận kẹo hiện tại
        long give = 1;  // Số lượng kẹo dự định tặng ở lượt này

        while (candies > 0) {
            // Nếu kẹo còn lại không đủ để tặng 'give', tặng nốt phần còn lại
            if (candies < give) {
                res[i % num_people] += candies;
                candies = 0; // Đã hết kẹo
            } else {
                // Tặng đủ số kẹo 'give'
                res[i % num_people] += give;
                candies -= give;
            }
            
            // Chuẩn bị cho lượt tặng tiếp theo
            give++;
            i++;
        }
        
        return res;
    }
};
// MSSV/HoTen - Bai 041
