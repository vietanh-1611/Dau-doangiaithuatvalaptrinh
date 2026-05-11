class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int totalTime = 0;
        int targetTickets = tickets[k];
        
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                // Người đứng trước hoặc chính là k
                totalTime += min(tickets[i], targetTickets);
            } else {
                // Người đứng sau k
                totalTime += min(tickets[i], targetTickets - 1);
            }
        }
        
        return totalTime;
    }
};
// MSSV/HoTen - Bai 052
