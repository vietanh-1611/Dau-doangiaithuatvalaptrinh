class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                // Trả về chỉ số đã tăng thêm 1 (1-indexed)
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                // Cần tổng lớn hơn, tăng con trỏ bên trái
                left++;
            }
            else {
                // Cần tổng nhỏ hơn, giảm con trỏ bên phải
                right--;
            }
        }
        
        // Theo đề bài, luôn có đúng một giải pháp nên không cần xử lý trường hợp rỗng
        return {};
    }
};
// MSSV/HoTen - Bai 090
