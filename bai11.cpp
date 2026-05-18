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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* buildBST(vector<int>& nums, int left, int right) {
        // Điều kiện dừng: Khi chỉ số trái vượt quá chỉ số phải
        if (left > right) return nullptr;

        // Tìm chỉ số giữa (tránh tràn số với (left + right) / 2)
        int mid = left + (right - left) / 2;

        // Tạo nút gốc với giá trị ở giữa
        TreeNode* root = new TreeNode(nums[mid]);

        // Đệ quy xây dựng hai nhánh
        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);

        return root;
    }
};
// MSSV/HoTen - Bai 118
