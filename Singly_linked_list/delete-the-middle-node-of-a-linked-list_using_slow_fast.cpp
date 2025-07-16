/*
🔹 Problem: delete-the-middle-node-of-a-linked-list using slow fast
🔗 https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list-using-slow-fast/
🧠 Approach: Slow-fast approach
⏱️ Time: O(n)
📦 Space: O(1)
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;  //track the previous node of slow node
        
        while(fast!=nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        //slow is at the middle, prev is the node before it
        prev->next = slow->next;

        return head;
    }
};