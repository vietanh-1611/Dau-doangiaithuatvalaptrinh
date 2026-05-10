class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        
        // Bắt buộc phải sắp xếp để xử lý trùng lặp
        sort(nums.begin(), nums.end());
        
        backtrack(nums, used, current, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, vector<bool>& used, 
                   vector<int>& current, vector<vector<int>>& result) {
        // Nếu độ dài bằng mảng gốc, ta có một hoán vị duy nhất
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            // Nếu phần tử đã dùng rồi thì bỏ qua
            if (used[i]) continue;

            // KIỂM TRA TRÙNG LẶP:
            // Nếu nums[i] == nums[i-1] và nums[i-1] chưa được dùng 
            // (nghĩa là nums[i-1] vừa được "nhả" ra từ bước quay lui trước)
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            current.push_back(nums[i]);
            
            backtrack(nums, used, current, result);
            
            // Quay lui
            current.pop_back();
            used[i] = false;
        }
    }
};