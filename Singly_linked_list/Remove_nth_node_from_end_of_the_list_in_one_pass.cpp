/*
🔹 Problem: Remove nth node from end of the list in one pass
🔗 https://leetcode.com/problems/Remove-nth-node-from-end-of-the-list-in-one-pass/
🧠 Approach: Using two pointers(in one pass)
⏱️ Time: O(N)
📦 Space: O(1)
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);  //creating dummy node before head
        dummy->next = head;

        //two pointers
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i=0;i<= n;i++){         // move fast pointer to the n+1 step ahed
            fast = fast->next;
        }

        while(fast != NULL){        //move both pointer untill fast reach to the null
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;      //remove the nth node

        return dummy->next;    //because dummy->next = head;
        
    }
};