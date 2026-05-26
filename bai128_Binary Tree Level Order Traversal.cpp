/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {}; // Trường hợp cây rỗng
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root); // Bắt đầu từ nút gốc
        
        while (!q.empty()) {
            int levelSize = q.size(); // Số lượng nút ở tầng hiện tại
            vector<int> currentLevel;
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                currentLevel.push_back(node->val);
                
                // Đẩy các nút con vào hàng đợi cho tầng tiếp theo
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            // Sau khi duyệt hết một tầng, thêm vào kết quả tổng
            result.push_back(currentLevel);
        }
        
        return result;
    }
};