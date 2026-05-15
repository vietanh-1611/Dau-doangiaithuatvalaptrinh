class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }

    bool validate(TreeNode* node, TreeNode* minNode, TreeNode* maxNode) {
        if (!node) return true;

        // Nếu giá trị nút hiện tại vi phạm khoảng (min, max)
        if ((minNode && node->val <= minNode->val) || 
            (maxNode && node->val >= maxNode->val)) {
            return false;
        }

        // Đệ quy sang trái: max mới là node hiện tại
        // Đệ quy sang phải: min mới là node hiện tại
        return validate(node->left, minNode, node) && 
               validate(node->right, node, maxNode);
    }
};