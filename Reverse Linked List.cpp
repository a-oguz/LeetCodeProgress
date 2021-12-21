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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head -> next == NULL){
            return head;
        }
        ListNode* iter = head;
        ListNode* temp1 = new ListNode();
        ListNode* temp2 = new ListNode(head->val);
        while(iter -> next != NULL){
            temp1 -> next = temp2;
            temp1 -> val = iter -> next -> val;
            iter = iter -> next;
            temp2 = temp1;
            temp1 = new ListNode();
        }
        
        return temp2;
    }
};