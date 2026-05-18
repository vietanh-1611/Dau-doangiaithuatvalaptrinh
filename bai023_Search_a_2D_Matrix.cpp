class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Khởi tạo giá mua thấp nhất là vô hạn và lợi nhuận bằng 0
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // Cập nhật giá mua thấp nhất nếu gặp mức giá rẻ hơn
            if (price < minPrice) {
                minPrice = price;
            } 
            // Nếu bán vào hôm nay có lời hơn mức lời cũ, hãy cập nhật
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }
};
// MSSV/HoTen - Bai 107
