/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Nếu danh sách rỗng hoặc chỉ có 1 phần tử
        if (!head) return head;

        ListNode* current = head;

        // Duyệt danh sách cho đến khi gặp nút cuối cùng
        while (current && current->next) {
            if (current->val == current->next->val) {
                // Nếu trùng, "nhảy" qua nút tiếp theo
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // Giải phóng bộ nhớ (tùy chọn trong phỏng vấn)
            } else {
                // Nếu không trùng, mới tiến con trỏ lên
                current = current->next;
            }
        }

        return head;
    }
};
// MSSV/HoTen - Bai 115
