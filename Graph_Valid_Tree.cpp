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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        
        int sum = 0;
        
        // Kiểm tra xem con bên trái của nút hiện tại có phải là nút lá không
        if (root->left && !root->left->left && !root->left->right) {
            // Nếu đúng là lá bên trái, cộng giá trị của nó vào tổng
            sum += root->left->val;
        } else {
            // Nếu không, tiếp tục tìm lá bên trái ở nhánh bên trái
            sum += sumOfLeftLeaves(root->left);
        }
        
        // Luôn luôn phải tìm thêm lá bên trái ở nhánh bên phải
        sum += sumOfLeftLeaves(root->right);
        
        return sum;
    }
};