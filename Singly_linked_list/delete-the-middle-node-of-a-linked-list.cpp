/*
🔹 Problem: delete-the-middle-node-of-a-linked-list
🔗 https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(1)
*/


class Solution {
public:
    int size_of_node(ListNode* tmp)
    {
        int cnt=0;
        while(tmp!=nullptr)
        {
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr)
            return head;


        ListNode* tmp = head;
        int sz = size_of_node(head);
        if(sz == 1)
        {
            return nullptr;
        }
        for(int i=0;i<sz/2-1;i++)
        {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;

        return head;
    }
};