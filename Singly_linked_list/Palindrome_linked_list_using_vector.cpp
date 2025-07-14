/*
🔹 Problem: Palindrome linked list using vector
🔗 https://leetcode.com/problems/Palindrome-linked-list/
🧠 Approach: Using Vector
⏱️ Time: O(N)
📦 Space: O(N)
*/


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* tmp = head;
        while(tmp != nullptr)
        {
            v.push_back(tmp->val);       // Store in vector
            tmp = tmp->next;
        }

        vector<int>v2;      //declare another vector

        v2=v;       // copying v into v2

        reverse(v2.begin(), v2.end());

        if(v2 == v)
            return true;
        else
            return false;
    
    }
};