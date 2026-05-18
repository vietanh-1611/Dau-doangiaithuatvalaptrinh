/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        // Thỏ di chuyển 2 bước, Rùa di chuyển 1 bước
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Rùa tiến 1
            fast = fast->next->next;    // Thỏ tiến 2

            // Nếu chúng gặp nhau, nghĩa là có chu trình
            if (slow == fast) {
                return true;
            }
        }

        // Nếu Thỏ chạm đến NULL, danh sách không có chu trình
        return false;
    }
};
// MSSV/HoTen - Bai 112
