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
    int preorderIndex;
    unordered_map<int, int> inorderMap;

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preorderIndex = 0;
        // Xây dựng bản đồ vị trí để tìm kiếm nhanh
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }
        return arrayToTree(preorder, 0, inorder.size() - 1);
    }

    TreeNode* arrayToTree(vector<int>& preorder, int left, int right) {
        // Nếu không còn phần tử nào để tạo cây
        if (left > right) return nullptr;

        // Lấy giá trị gốc từ preorder
        int rootValue = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);

        // Tìm vị trí gốc trong inorder để chia nhánh
        int mid = inorderMap[rootValue];

        // Đệ quy xây dựng nhánh trái trước, sau đó là nhánh phải
        // (Theo đúng thứ tự của Preorder)
        root->left = arrayToTree(preorder, left, mid - 1);
        root->right = arrayToTree(preorder, mid + 1, right);

        return root;
    }
};