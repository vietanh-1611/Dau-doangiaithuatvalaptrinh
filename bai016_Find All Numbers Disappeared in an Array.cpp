class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Bước 1: Đánh dấu các số đã xuất hiện
        for (int i = 0; i < nums.size(); i++) {
            // Lấy giá trị tuyệt đối vì số này có thể đã bị đánh dấu âm trước đó
            int val = abs(nums[i]) - 1; 
            
            // Nếu số tại vị trí 'val' còn dương, đổi nó thành âm
            if (nums[val] > 0) {
                nums[val] = -nums[val];
            }
        }
        
        // Bước 2: Tìm các vị trí vẫn còn số dương
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                // Vị trí i tương ứng với số i + 1 bị thiếu
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};
// MSSV/HoTen - Bai 016
