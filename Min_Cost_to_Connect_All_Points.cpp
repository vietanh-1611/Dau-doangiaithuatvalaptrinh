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
    TreeNode* curr; // Con trỏ để xây dựng cây mới

    void inorder(TreeNode* node) {
        if (node == nullptr) return;
        
        // Duyệt nhánh trái
        inorder(node->left);
        
        // Xử lý nút hiện tại
        node->left = nullptr;  // Ngắt kết nối bên trái theo yêu cầu
        curr->right = node;    // Nối vào bên phải của cây mới
        curr = node;           // Di chuyển con trỏ xây dựng tiến lên
        
        // Duyệt nhánh phải
        inorder(node->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        curr = dummy;
        
        inorder(root);
        
        return dummy->right;
    }
};