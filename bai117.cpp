class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
    }
    
    void helper(TreeNode* node, vector<int>& res) {
        if (!node) return;
        
        helper(node->left, res);  // Duyệt trái
        res.push_back(node->val); // Duyệt gốc
        helper(node->right, res); // Duyệt phải
    }
};
// MSSV/HoTen - Bai 117
