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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head  == NULL){  // empty list
            return NULL;
        }
        ListNode* iter = head;
        int size = 0;
        
        while(iter != NULL){
            iter = iter -> next;
            size++;
        }
        
        if(size == 1){  // taking out last element
            return NULL;
        }
        
        if(size == n){ // taking out first element
            head = head -> next;
            return head;
        }
        
        int index = size - n; 
        iter = head;
        
        for(int i = 0; i < index-1; i++){
            if( iter -> next == NULL){
                return NULL;
            }
            iter = iter -> next;
        }
        if(n == 1){
            iter -> next = NULL;
        }
        
        else{
            iter = iter -> next;
            iter -> val = iter -> next -> val;
            iter -> next = iter -> next -> next;
        }
        
        return head;
        
    }
};