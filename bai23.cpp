class Solution {
public:
    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // min-heap
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;

        // Đưa node đầu của mỗi list vào heap
        for (ListNode* l : lists) {
            if (l != nullptr) {
                pq.push(l);
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();

            current->next = node;
            current = current->next;

            if (node->next != nullptr) {
                pq.push(node->next);
            }
        }

        return dummy->next;
    }
};