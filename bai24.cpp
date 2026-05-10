class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* current = dummy;

        while (current->next != nullptr && current->next->next != nullptr) {
            ListNode* first = current->next;
            ListNode* second = current->next->next;

            // Đổi chỗ
            first->next = second->next;
            second->next = first;
            current->next = second;

            // Di chuyển sang cặp tiếp theo
            current = first;
        }

        return dummy->next;
    }
};