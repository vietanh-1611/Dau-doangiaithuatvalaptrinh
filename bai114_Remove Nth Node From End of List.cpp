/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Tạo node giả để xử lý trường hợp xóa head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Cho fast đi trước n bước
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Di chuyển cả hai cho đến khi fast tới cuối
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Xóa node
        slow->next = slow->next->next;

        return dummy->next;
    }
};
// MSSV/HoTen - Bai 114
