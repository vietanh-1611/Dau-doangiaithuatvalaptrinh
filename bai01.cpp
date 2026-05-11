class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Tạo một tập hợp không thứ tự để lưu các số đã duyệt qua
        unordered_set<int> seen;
        
        for (int x : nums) {
            // Nếu tìm thấy x trong tập hợp 'seen'
            // seen.count(x) trả về 1 nếu x tồn tại, 0 nếu không
            if (seen.count(x)) {
                return true;
            }
            // Nếu chưa thấy, thêm x vào tập hợp
            seen.insert(x);
        }
        
        // Nếu duyệt hết cả mảng mà không thấy trùng lặp
        return false;
    }
};