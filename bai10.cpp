class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            // Kiểm tra xem vị trí hiện tại có trồng được hoa không
            if (flowerbed[i] == 0) {
                // Kiểm tra hàng xóm bên trái
                bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
                // Kiểm tra hàng xóm bên phải
                bool right_empty = (i == size - 1) || (flowerbed[i + 1] == 0);
                
                if (left_empty && right_empty) {
                    flowerbed[i] = 1; // Trồng hoa vào đây
                    count++;
                    
                    // Nếu đã trồng đủ n bông thì thoát sớm cho nhanh
                    if (count >= n) return true;
                }
            }
        }
        
        return count >= n;
    }
};