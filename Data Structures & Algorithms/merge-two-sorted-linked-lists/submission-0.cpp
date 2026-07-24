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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //when one of the list is empty
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }

        ListNode * ans=new ListNode(-1);
        ListNode * curr=ans;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                curr->next=list1;
                curr=list1;
                list1=list1->next;
                
            }
            else
            {
                curr->next=list2;
                curr=list2;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            curr->next=list1;
                curr=list1;
                list1=list1->next;
        }
        while(list2!=NULL){
             curr->next=list2;
                curr=list2;
                list2=list2->next;
        }
        return ans->next;


    }
};
