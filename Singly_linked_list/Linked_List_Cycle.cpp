/*
🔹 Problem: Linked List Cycle
🔗 https://leetcode.com/problems/Linked-List-Cycle/
🧠 Approach: Floyd's Cycle-detection Algorithm/ fast-slow approach/ hair-tortoise approach
⏱️ Time: O(N)
📦 Space: O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        bool flag= false;

        while(fast!=NULL && fast->next != NULL)
        {
            fast= fast->next->next;
            slow = slow->next;
            if( fast == slow )
            {
                flag= true;
                break;
            }

        }
        return flag;
    }
};