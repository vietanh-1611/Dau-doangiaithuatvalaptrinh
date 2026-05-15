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
    // Hàm phụ: Kiểm tra hai cây có giống hệt nhau không
    bool isSameTree(TreeNode* s, TreeNode* t) {
        // Nếu cả hai đều rỗng thì giống nhau
        if (!s && !t) return true;
        // Nếu một trong hai rỗng hoặc giá trị khác nhau thì khác nhau
        if (!s || !t || s->val != t->val) return false;
        
        // Kiểm tra đệ quy cả nhánh trái và nhánh phải
        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // Nếu cây gốc rỗng thì không thể chứa subRoot (vì subRoot có ít nhất 1 nút)
        if (!root) return false;
        
        // 1. Kiểm tra nếu cây bắt đầu từ nút hiện tại giống hệt subRoot
        if (isSameTree(root, subRoot)) return true;
        
        // 2. Nếu không giống, thử tìm ở nhánh con bên trái hoặc bên phải
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};