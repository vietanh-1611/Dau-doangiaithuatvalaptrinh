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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Trường hợp 1: Cả hai cây đều rỗng
        if (p == nullptr && q == nullptr) {
            return true;
        }
        
        // Trường hợp 2: Một trong hai cây rỗng, hoặc giá trị khác nhau
        if (p == nullptr || q == nullptr || p->val != q->val) {
            return false;
        }
        
        // Trường hợp 3: Kiểm tra đệ quy các nhánh trái và phải
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};