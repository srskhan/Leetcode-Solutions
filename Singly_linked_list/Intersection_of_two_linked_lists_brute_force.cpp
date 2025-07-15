/*
🔹 Problem: Intersection of two linked lists brute force
🔗 https://leetcode.com/problems/intersection-of-two-linked-lists/
🧠 Approach: Brute Force
⏱️ Time: O(n*m)
📦 Space: 
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // ListNode* tmp1 = headA;

        // while(tmp1 != nullptr){
        //     ListNode* tmp2 = headB;
        //     while(tmp2 != nullptr){
        //         if(tmp1 == tmp2){
        //             return tmp1;
        //         }
        //         tmp2 = tmp2->next;
        //     }
        //     tmp1= tmp1->next;
        // }
        // return nullptr;

        for(ListNode* tmpA = headA; tmpA != NULL; tmpA = tmpA->next){
            for(ListNode* tmpB = headB; tmpB != NULL; tmpB = tmpB->next){
                if(tmpA == tmpB){
                    return tmpA;
                }
            }
        }
        return NULL;
    }
};
