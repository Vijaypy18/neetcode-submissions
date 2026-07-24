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
    void Reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* pre=NULL;
        while(curr!=NULL){
            ListNode* next= curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
         head=pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          
         
         int carry=0;
         ListNode* ans=new ListNode(-1);
         ListNode* temp=ans;
         while(l1 || l2 || carry ){
            int n1=l1?l1->val:0;
            int n2=l2?l2->val:0;
            int sum=n1+n2+carry;
             carry=sum/10;
             int digit=sum%10;
             
             temp->next=new ListNode(digit);
             temp=temp->next;
             l1=l1?l1->next:nullptr;
             l2=l2?l2->next:nullptr;


         }


       return ans->next;
         
    }
};
