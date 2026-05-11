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
    TreeNode* invertTree(TreeNode* root) {
        // 1. Nếu cây trống, không làm gì cả
        if (root == nullptr) {
            return nullptr;
        }

        // 2. Hoán đổi con bên trái và con bên phải của node hiện tại
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // 3. Tiếp tục đảo ngược các nhánh con một cách đệ quy
        invertTree(root->left);
        invertTree(root->right);

        // 4. Trả về gốc của cây đã đảo ngược
        return root;
    }
};