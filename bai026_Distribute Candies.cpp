class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // Bước 1: Tính số lượng kẹo tối đa bác sĩ cho phép ăn
        int maxAllowed = candyType.size() / 2;
        
        // Bước 2: Đếm số loại kẹo thực tế Alice có
        // Sử dụng unordered_set để lưu trữ các loại kẹo duy nhất
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
        int actualTypes = uniqueTypes.size();
        
        // Bước 3: Trả về giá trị nhỏ hơn giữa thực tế và cho phép
        return min(actualTypes, maxAllowed);
    }
};
// MSSV/HoTen - Bai 026
