class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Trường hợp cơ sở: Cây rỗng có độ sâu bằng 0
        if (!root) return 0;
        
        // Đệ quy tính độ sâu của hai nhánh
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        // Trả về giá trị lớn hơn cộng thêm 1 (nút hiện tại)
        return 1 + max(leftDepth, rightDepth);
    }
};