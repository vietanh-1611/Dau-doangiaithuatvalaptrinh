class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> currentCombination;
        
        // Sắp xếp mảng để có thể tối ưu hóa việc dừng sớm (pruning)
        sort(candidates.begin(), candidates.end());
        
        backtrack(candidates, target, 0, currentCombination, result);
        return result;
    }

private:
    void backtrack(vector<int>& candidates, int target, int start, 
                   vector<int>& current, vector<vector<int>>& result) {
        // Nếu tổng bằng target, ta tìm được một tổ hợp hợp lệ
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Tối ưu hóa: Nếu số hiện tại lớn hơn target còn lại, 
            // các số sau nó cũng sẽ lớn hơn (vì mảng đã sắp xếp), ta dừng lặp.
            if (candidates[i] > target) break;

            // Chọn số hiện tại
            current.push_back(candidates[i]);
            
            // Gọi đệ quy: Vì có thể chọn lại chính số đó, tham số start vẫn là i
            backtrack(candidates, target - candidates[i], i, current, result);
            
            // Quay lui: Loại bỏ số vừa chọn để thử phương án khác
            current.pop_back();
        }
    }
};