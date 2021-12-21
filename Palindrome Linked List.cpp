/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        if(head -> next == NULL){
            return true;
        }
        
        ListNode* reverseList;
        ListNode* temp;
        
        ListNode* iter = head;
        temp = new ListNode(head->val);
        reverseList = temp;
        iter = iter -> next;
        
        while(iter != NULL){
            temp = new ListNode(iter->val);
            temp -> next = reverseList;
            reverseList = temp;
            iter = iter -> next;
        }
        
        iter = head;
        ListNode* revIter = reverseList;
        
        while(revIter !=  NULL){
            if(revIter -> val != iter -> val){
                return false;
            }
            iter = iter -> next;
            revIter = revIter -> next;
        } 
        
        return true;
        
        
        
    }
};