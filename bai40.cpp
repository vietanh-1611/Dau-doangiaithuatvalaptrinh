class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        
        // Bắt buộc phải sắp xếp để xử lý trùng lặp và tối ưu pruning
        sort(candidates.begin(), candidates.end());
        
        backtrack(candidates, target, 0, current, result);
        return result;
    }

private:
    void backtrack(vector<int>& candidates, int target, int start, 
                   vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Tối ưu: Nếu số hiện tại lớn hơn mục tiêu, không cần xét các số sau
            if (candidates[i] > target) break;

            // XỬ LÝ TRÙNG LẶP: 
            // Nếu số hiện tại giống số trước đó trong cùng một tầng đệ quy, bỏ qua nó.
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            current.push_back(candidates[i]);
            
            // Gọi đệ quy với i + 1 vì mỗi phần tử chỉ dùng 1 lần
            backtrack(candidates, target - candidates[i], i + 1, current, result);
            
            current.pop_back(); // Quay lui
        }
    }
};