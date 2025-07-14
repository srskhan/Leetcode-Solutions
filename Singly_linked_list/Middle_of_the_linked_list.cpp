/*
🔹 Problem: 876.Middle of the linked list
🔗 https://leetcode.com/problems/Middle-of-the-linked-list/
🧠 Approach: 
⏱️ Time: O(N)
📦 Space: O(1)
*/

class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* tmp = head;
        int cnt=0;
        while(tmp!=NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode* tmp = head;
        for(int i=0;i<sz/2;i++)
        {
            tmp = tmp->next;
        }

        return tmp;
    }
};