class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;  // Số lượng tờ $5 hiện có
        int ten = 0;   // Số lượng tờ $10 hiện có

        for (int bill : bills) {
            if (bill == 5) {
                // Khách đưa $5, không cần thối
                five++;
            } 
            else if (bill == 10) {
                // Khách đưa $10, cần thối lại $5
                if (five == 0) return false;
                five--;
                ten++;
            } 
            else { // bill == 20
                // Khách đưa $20, cần thối lại $15
                // Ưu tiên thối 1 tờ $10 + 1 tờ $5
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                } 
                // Nếu không có $10, thối bằng 3 tờ $5
                else if (five >= 3) {
                    five -= 3;
                } 
                else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
// MSSV/HoTen - Bai 038
