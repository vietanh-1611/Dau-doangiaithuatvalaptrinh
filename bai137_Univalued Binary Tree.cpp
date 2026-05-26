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
    bool isUnivalTree(TreeNode* root) {
        // Trường hợp cơ sở: Cây rỗng mặc định là true
        if (!root) return true;

        // Kiểm tra con bên trái
        if (root->left) {
            // Nếu con trái khác giá trị gốc, trả về false ngay lập tức
            if (root->left->val != root->val) return false;
        }

        // Kiểm tra con bên phải
        if (root->right) {
            // Nếu con phải khác giá trị gốc, trả về false ngay lập tức
            if (root->right->val != root->val) return false;
        }

        // Đệ quy kiểm tra tiếp các nhánh con
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};