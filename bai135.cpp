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
    // Hàm DFS để tìm tất cả các lá từ trái sang phải
    void findLeaves(TreeNode* node, vector<int>& leaves) {
        if (node == nullptr) return;
        
        // Nếu là nút lá, thêm vào vector
        if (node->left == nullptr && node->right == nullptr) {
            leaves.push_back(node->val);
            return;
        }
        
        // Duyệt bên trái trước để đảm bảo thứ tự từ trái sang phải
        findLeaves(node->left, leaves);
        findLeaves(node->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        
        findLeaves(root1, leaves1);
        findLeaves(root2, leaves2);
        
        // So sánh hai chuỗi giá trị lá
        return leaves1 == leaves2;
    }
};