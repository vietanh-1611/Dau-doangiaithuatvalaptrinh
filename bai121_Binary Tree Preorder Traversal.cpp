class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }

private:
    void traverse(TreeNode* node, vector<int>& res) {
        if (!node) return;

        // 1. Thăm nút gốc
        res.push_back(node->val);
        // 2. Đi sang trái
        traverse(node->left, res);
        // 3. Đi sang phải
        traverse(node->right, res);
    }
};