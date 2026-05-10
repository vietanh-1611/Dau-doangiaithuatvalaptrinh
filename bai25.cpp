class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        // Kiểm tra có đủ k node không
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }

        // Nếu đủ k node thì đảo
        if (count == k) {
            curr = reverseKGroup(curr, k); // xử lý phần sau

            // đảo k node đầu
            while (count--) {
                ListNode* temp = head->next;
                head->next = curr;
                curr = head;
                head = temp;
            }
            head = curr;
        }

        return head;
    }
};