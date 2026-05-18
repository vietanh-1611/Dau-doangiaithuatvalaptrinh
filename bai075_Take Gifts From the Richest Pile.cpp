class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // Bước 1: Khởi tạo Max-Heap từ mảng gifts
        priority_queue<int> pq(gifts.begin(), gifts.end());
        
        // Bước 2: Thực hiện thao tác trong k giây
        while (k--) {
            // Lấy món quà lớn nhất
            int max_val = pq.top();
            pq.pop();
            
            // Thay thế bằng căn bậc hai của chính nó
            pq.push(sqrt(max_val));
        }
        
        // Bước 3: Tính tổng số quà còn lại
        long long totalRemaining = 0;
        while (!pq.empty()) {
            totalRemaining += pq.top();
            pq.pop();
        }
        
        return totalRemaining;
    }
};
// MSSV/HoTen - Bai 075
