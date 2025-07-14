/*
🔹 Problem: Palindrome Linked List
🔗 https://leetcode.com/problems/Palindrome-Linked-List/
🧠 Approach: Trying to do by linked list sratched, not efficient
⏱️ Time: O(n)
📦 Space: O(n)
*/


class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* newnode = new ListNode(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->next = nullptr;
        tail = newnode;
    }

    void reverse_linked_list(ListNode* &head, ListNode* tmp)
    {
        if(tmp->next == nullptr){
            head = tmp;
            return;
        }
        reverse_linked_list(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = nullptr; 
    }

    bool isPalindrome(ListNode* head) {

        //First we copy the linked list
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        ListNode* tmp = head;

        while(tmp != NULL)
        {
            insert_at_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }

        //then reverse the linked list
        reverse_linked_list(newhead, newhead);

        //Finally checking Palindrome
        tmp = head;
        ListNode* tmp2 = newhead;

        while(tmp!= nullptr)
        {
            if(tmp->val != tmp2->val){
                return false;
            } 
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;

    }
};