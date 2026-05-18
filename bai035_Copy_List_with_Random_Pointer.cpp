class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = 0;
        int emptyBottles = 0;
        
        while (numBottles > 0) {
            // Bước 1: Uống hết số chai đầy hiện có
            totalDrunk += numBottles;
            emptyBottles += numBottles;
            numBottles = 0;
            
            // Bước 2: Đổi chai không lấy chai đầy mới
            numBottles = emptyBottles / numExchange;
            
            // Bước 3: Cập nhật số chai không còn dư lại sau khi đổi
            emptyBottles = emptyBottles % numExchange;
        }
        
        return totalDrunk;
    }
};
// MSSV/HoTen - Bai 035
