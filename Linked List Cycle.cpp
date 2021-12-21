/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* iter1 = head;
        ListNode* iter2 = head;
        if(iter1 == NULL){
            return false;
        }
        
        while(iter1 != NULL && iter2 != NULL){
            iter1 = iter1 -> next;
            
            if(iter2 -> next == NULL){
                return false;
            }
            iter2 = iter2 -> next -> next;
            if(iter1 == iter2){
                return true;
            }
            
        }
        
        return false;
        
        
    }
};