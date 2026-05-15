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
    ListNode* removeElements(ListNode* head, int val) {
        // Tạo một node giả đứng trước head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr = dummy;
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                // Lưu node cần xóa để giải phóng bộ nhớ (optional nhưng tốt)
                ListNode* temp = curr->next;
                // Nhảy qua node trùng giá trị
                curr->next = curr->next->next;
                delete temp; 
            } else {
                // Chỉ tiến lên nếu không xóa node nào
                curr = curr->next;
            }
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // Xóa node giả trước khi trả về
        return newHead;
    }
};
// MSSV/HoTen - Bai 116
