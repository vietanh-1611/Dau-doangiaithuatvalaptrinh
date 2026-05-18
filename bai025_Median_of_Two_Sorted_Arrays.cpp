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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        
        while (curr != nullptr) {
            // 1. Lưu lại node tiếp theo
            ListNode *nextTemp = curr->next;
            
            // 2. Đảo ngược con trỏ của node hiện tại
            curr->next = prev;
            
            // 3. Di chuyển prev và curr tiến lên một bước
            prev = curr;
            curr = nextTemp;
        }
        
        // prev bây giờ là đầu mới của danh sách đã đảo ngược
        return prev;
    }
};
// MSSV/HoTen - Bai 109
