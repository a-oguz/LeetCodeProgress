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
    
    int maxDepthR(TreeNode* root, int curr_depth){
        if(root == NULL){
            return 0;
        }
        int depth = curr_depth;
        
        depth = max(maxDepthR(root->left, depth), maxDepthR(root->right, depth)) + 1;

        return depth;
        
    }
    
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int depth = 0;
        
        depth = max(maxDepthR(root->left, depth), maxDepthR(root->right, depth)) + 1;

        return depth;
    }
};