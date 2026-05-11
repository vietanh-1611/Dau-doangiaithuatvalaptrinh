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
    void findPaths(TreeNode* node, string path, vector<string>& result) {
        if (node == nullptr) return;

        // Thêm giá trị node hiện tại vào chuỗi đường đi
        path += to_string(node->val);

        // Kiểm tra nếu là node lá
        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(path); // Lưu đường đi hoàn chỉnh
        } else {
            // Nếu chưa phải lá, thêm dấu mũi tên và tiếp tục duyệt
            path += "->";
            findPaths(node->left, path, result);
            findPaths(node->right, path, result);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root != nullptr) {
            findPaths(root, "", result);
        }
        return result;
    }
};