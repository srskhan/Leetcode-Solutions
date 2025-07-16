/*
🔹 Problem: Swapping nodes in a linked list
🔗 https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(1)
*/

class Solution {
public:
    int size(ListNode* tmp)
    {
        int cnt = 0;
        while(tmp!=nullptr){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        if(head == nullptr)
        {
            return head;
        }

        int sz = size(head);
        ListNode* tmp1=head;
        ListNode* tmp2=head;

        for(int i=1;i<k;i++){
            tmp1 = tmp1->next;
        }

        for(int i=1;i<sz-k+1;i++){
            tmp2 = tmp2->next;
        }
        swap(tmp1->val,tmp2->val);

        return head;
    }
};