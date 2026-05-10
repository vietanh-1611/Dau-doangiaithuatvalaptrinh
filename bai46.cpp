class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
        // Nếu đã xét đến phần tử cuối cùng, ta có một hoán vị hoàn chỉnh
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            // Hoán đổi phần tử tại start với phần tử tại i
            swap(nums[start], nums[i]);
            
            // Đệ quy để tìm hoán vị cho phần còn lại của mảng
            backtrack(nums, start + 1, result);
            
            // Quay lui (Backtrack): Đổi lại chỗ cũ để thử trường hợp tiếp theo
            swap(nums[start], nums[i]);
        }
    }
};