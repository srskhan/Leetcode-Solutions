/*
🔹 Problem: merge-nodes-in-between-zeros
🔗 https://leetcode.com/problems/merge-nodes-in-between-zeros/
🧠 Approach: 
⏱️ Time: O(n)
📦 Space: O(n)
***Problem: Creating extra memory
*/

class Solution {
public:
    void insert_at_tail(ListNode* &newhead, ListNode* &newtail, int sum_val)
    {
        ListNode* newnode = new ListNode(sum_val);

        if(newhead == nullptr)
        {
            newhead = newnode;
            newtail = newnode;
            return;
        }
        newtail->next = newnode;
        newnode->next = nullptr;
        newtail = newnode;
    }

    void print_linked_list(ListNode* head)
    {
        ListNode* tmp = head;
        while(tmp!=nullptr)
        {
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
    }

    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head->next;
        

        ListNode* newhead = nullptr;
        ListNode* newtail = nullptr;
        int sum = 0;
        while(tmp!= nullptr){
            if(tmp->val == 0){
                insert_at_tail(newhead,newtail,sum);
                sum=0;
            }
            else{
                sum = sum + tmp->val;
            }
            tmp = tmp->next;
        }
        
        return newhead;
    }
};