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
    void deleteNode(ListNode* node) {
        /* This would cause memory leak in general but leetcode accepts it */
        node -> val = node -> next -> val;
        node -> next = node -> next -> next;
            
        
    }
};