class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // Dự phòng bộ nhớ trước để tối ưu hiệu suất (không bắt buộc nhưng nên làm)
        ans.reserve(2 * n); 
        
        // Duyệt qua nums 2 lần
        for (int i = 0; i < 2; i++) {
            for (int x : nums) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};