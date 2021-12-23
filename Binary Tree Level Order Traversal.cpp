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
    void levelOrderR(TreeNode* root, vector<vector<int>>& result,int depth) {
        if(root == NULL){
            return;
        }
        if(depth >= result.size()){
            vector<int> subArr;
            subArr.push_back(root->val);
            result.push_back(subArr);   
        }
        else{
            result[depth].push_back(root->val);
        }
        levelOrderR(root->left, result, depth+1);
        levelOrderR(root->right, result, depth+1);
        
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> subArr;
        int depth = 0;
        if(root == NULL){
            return result;
        }
        subArr.push_back(root->val);
        result.push_back(subArr);
        levelOrderR(root->left, result, depth+1);
        levelOrderR(root->right, result, depth+1);
        
        return result;
    }
    
};