/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST_R(vector<int>& nums,int start, int end) {
        TreeNode* root;
        int mid = (start+end) / 2;
        if(end < start){
            return NULL;
        }
        else{
            root = new TreeNode(nums[mid]);
            root -> left = sortedArrayToBST_R(nums,start,mid-1);
            root -> right = sortedArrayToBST_R(nums,mid+1,end);
            
            return root;
        }
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root;
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start+end) / 2;
        if(end < start){
            return NULL;
        }
        else{
            root = new TreeNode(nums[mid]);
            root -> left = sortedArrayToBST_R(nums,start,mid-1);
            root -> right = sortedArrayToBST_R(nums,mid+1,end);
            return root;
        }
        
    }
};