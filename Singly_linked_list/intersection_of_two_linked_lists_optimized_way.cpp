/*
🔹 Problem: intersection of two linked lists
🔗 https://leetcode.com/problems/intersection-of-two-linked-lists/
🧠 Approach: 
⏱️ Time: O(M+N)
📦 Space: O(1)
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tmpA = headA;
        ListNode* tmpB = headB;

        while( tmpA != tmpB)
        {
            if(tmpA == NULL) 
                tmpA = headB;         //if tmpA becomes null then again start from another node
            else
                tmpA = tmpA->next;


            if(tmpB == NULL)
                tmpB = headA;         //if tmpA becomes null then again start from another node
            else
                tmpB = tmpB->next;
        }
        return tmpA;
    }
};