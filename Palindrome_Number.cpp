class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        for (int num : nums) {
            // Thực hiện phép XOR liên tiếp qua từng phần tử
            result ^= num;
        }
        
        return result;
    }
};