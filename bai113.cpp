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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // BƯỚC 1: Tìm điểm giữa bằng kỹ thuật Rùa và Thỏ
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // BƯỚC 2: Đảo ngược nửa sau của danh sách
        ListNode *secondHalf = reverse(slow->next);
        slow->next = nullptr; // Ngắt kết nối hai nửa

        // BƯỚC 3: Trộn xen kẽ hai danh sách
        ListNode *firstHalf = head;
        while (secondHalf) {
            ListNode *tmp1 = firstHalf->next;
            ListNode *tmp2 = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = tmp1;

            firstHalf = tmp1;
            secondHalf = tmp2;
        }
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode *prev = nullptr, *curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
// MSSV/HoTen - Bai 113
