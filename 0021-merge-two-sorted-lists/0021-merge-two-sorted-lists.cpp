class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* temp1 = list1;

        while(temp1->next){
            temp1 = temp1->next;
        }

        temp1->next = list2;

        vector<int> v;

        ListNode* temp = list1;

        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }

        sort(v.begin(), v.end());

        temp = list1;
        int i = 0;

        while(temp){
            temp->val = v[i++];
            temp = temp->next;
        }

        return list1;
    }
};