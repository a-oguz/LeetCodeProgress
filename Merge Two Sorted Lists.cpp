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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        ListNode* iter1 = list1;
        ListNode* iter2 = list2;
        
        ListNode* newList;
        ListNode* newListIter;
        if((iter1-> val > iter2 -> val)){
            newList  = iter2;
            newListIter = newList;
            iter2 = iter2 -> next;
        }
        else{
            newList  = iter1;
            newListIter = newList;
            iter1 = iter1 -> next;
        }
        
        while(iter1 != NULL && iter2 != NULL){
            if((iter1-> val > iter2 -> val)){
                newListIter -> next = iter2;
                newListIter = newListIter -> next;
                iter2 = iter2 -> next;
            }
            else{
                newListIter -> next = iter1;
                newListIter = newListIter -> next;
                iter1 = iter1 -> next;
            }
        }
        
        if(iter1 != NULL){
            newListIter -> next = iter1;
        }
        if(iter2 != NULL){
            newListIter -> next = iter2;
        }
        
        return newList;
        
        
    }
};