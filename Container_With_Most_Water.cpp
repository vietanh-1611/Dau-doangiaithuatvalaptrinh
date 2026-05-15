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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // 1. Trường hợp cơ sở: Cây rỗng
        if (root == nullptr) return false;

        // 2. Kiểm tra nếu đây là nút lá
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }

        // 3. Đệ quy xuống các nhánh con với mục tiêu đã trừ bớt
        int remainingSum = targetSum - root->val;
        return hasPathSum(root->left, remainingSum) || 
               hasPathSum(root->right, remainingSum);
    }
};
// MSSV/HoTen - Bai 120
