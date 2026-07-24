class Solution {
public:
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* Reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = NULL;
        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* middle = findMiddle(head);
        ListNode* second = Reverse(middle->next);
        middle->next = NULL;

        ListNode* first = head;
        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
