class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        
        // Nếu không có con trái, phải đi tìm bên phải
        if (!root->left) return 1 + minDepth(root->right);
        
        // Nếu không có con phải, phải đi tìm bên trái
        if (!root->right) return 1 + minDepth(root->left);
        
        // Nếu có cả hai, lấy giá trị nhỏ hơn
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
// MSSV/HoTen - Bai 119
