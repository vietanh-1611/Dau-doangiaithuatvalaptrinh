class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }

private:
    void traverse(TreeNode* node, vector<int>& res) {
        if (!node) return;

        // 1. Đi hết nhánh trái
        traverse(node->left, res);
        // 2. Đi hết nhánh phải
        traverse(node->right, res);
        // 3. Thăm nút gốc
        res.push_back(node->val);
    }
};