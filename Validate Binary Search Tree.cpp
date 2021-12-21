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
    bool isValidBST_R(TreeNode* root, int min_limit, int max_limit ) {
        if( root == NULL){
            return true;
        }
        int mid = root->val;
        int left;
        int right;
        
        if(root -> left != NULL){
            left = root->left->val;
            if(left >= mid || left < min_limit){
                return false;
            }
        }
        if(root -> right != NULL){
            right = root->right->val;
            if(right <= mid || right > max_limit){
                return false;
            }
        }
        
        if( mid  == INT_MAX){
            if( !isValidBST_R(root->left, min_limit, mid-1) || root->right != NULL ){
            return false;
            }
        }
        else if( mid  == INT_MIN){
            if( root->left != NULL || !isValidBST_R(root->right, mid+1, max_limit)){
            return false;
            }
        }
        
        else if( !isValidBST_R(root->left, min_limit, mid-1) || !isValidBST_R(root->right, mid+1, max_limit)){
            return false;
        }
        
        
        return true;
    }
    
    
    bool isValidBST(TreeNode* root) {
        if( root == NULL){
            return true;
        }
        int mid = root->val;
        int left;
        int right;
        
        if(root -> left != NULL){
            left = root->left->val;
            if(left >= mid){
                return false;
            }
        }
        if(root -> right != NULL){
            right = root->right->val;
            if(right <= mid){
                return false;
            }
        }
        
        if( mid  == INT_MAX){
            if( !isValidBST_R(root->left, INT_MIN, mid-1) || root->right != NULL ){
            return false;
            }
        }
        else if( mid  == INT_MIN){
            if( root->left != NULL || !isValidBST_R(root->right, mid+1, INT_MAX)){
            return false;
            }
        }
        else if( !isValidBST_R(root->left, INT_MIN, mid-1) || !isValidBST_R(root->right, mid+1, INT_MAX)){
            return false;
        }
        
        
        return true;
    }
};