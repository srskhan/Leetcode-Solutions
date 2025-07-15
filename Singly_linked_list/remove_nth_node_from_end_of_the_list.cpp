/*
🔹 Problem: remove nth node from end of the list
🔗 https://leetcode.com/problems/remove-nth-node-from-end-of-the-list/
🧠 Approach: Brute force
⏱️ Time: O(n)
📦 Space: O(1)
*/

class Solution {
public:
    int size(ListNode* tmp)
    {
        int cnt=0;
        while(tmp!= nullptr)
        {
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz= size(head);
        int idx = sz-n;
        if(idx == 0){
            head = head->next;
        }
        else
        {
            ListNode* tmp = head;
            for(int i=0;i<sz-n-1;i++){
                tmp = tmp->next;
            }
            tmp->next = tmp->next->next;
        }
        return head;
    }
};