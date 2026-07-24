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
    int length(ListNode* head)
    {
        ListNode* curr=head;
        int len=0;
        while(curr!=NULL)
        {
            len++;
            curr=curr->next;
        }
        return len;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       int n1=length(head)-n;
        if (n1 == 0) { // Head node needs to be removed
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
       cout<<n1;
       ListNode* curr=head;
       ListNode* prev=NULL;
       while(n1--)
       {
          prev=curr;
          curr=curr->next;
          
       }
       prev->next=curr->next;
       curr->next=NULL;
       delete(curr);
       return head;
    }
};
