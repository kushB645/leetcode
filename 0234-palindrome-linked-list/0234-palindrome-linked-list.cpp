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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* cur=slow->next;
        while(cur!=NULL)
        {
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }

        ListNode*first=head;
        ListNode* second=prev;

        while(second)
        {
            if(first->val!=second->val){
            return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};