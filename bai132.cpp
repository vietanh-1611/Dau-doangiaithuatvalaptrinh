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
    int currVal = 0;
    int currCount = 0;
    int maxCount = 0;
    vector<int> modes;

    void handleValue(int val) {
        if (val == currVal) {
            currCount++;
        } else {
            currVal = val;
            currCount = 1;
        }

        if (currCount > maxCount) {
            maxCount = currCount;
            modes.clear();
            modes.push_back(val);
        } else if (currCount == maxCount) {
            modes.push_back(val);
        }
    }

    void inOrder(TreeNode* node) {
        if (!node) return;
        
        inOrder(node->left);
        handleValue(node->val);
        inOrder(node->right);
    }

    vector<int> findMode(TreeNode* root) {
        // Khởi tạo currVal bằng một giá trị không tồn tại hoặc xử lý nút đầu tiên
        // Ở đây ta dùng một mẹo nhỏ: duyệt qua để lấy giá trị đầu tiên thực sự
        if (!root) return {};
        
        inOrder(root);
        return modes;
    }
};