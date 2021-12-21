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
    vector<int> isSymmetricLeft(TreeNode* root) { // IN ORDER LNR
        vector<int> result;
        if(root == NULL){
            result.push_back(-101); // INPUT VALUES CONSTRAINED AT -100, -101 would show null
            return result;
        }
        else{
            if(root -> left != NULL || root -> right != NULL){
                result = isSymmetricLeft(root->left);
                result.push_back(root->val);
                vector<int> right_traversal = isSymmetricRight(root->right);
                for(int i =0; i < right_traversal.size(); i++){
                    result.push_back(right_traversal[i]);
                }
            }
            else{
                result.push_back(root->val);
            }
            return result;
        }
        
    }
    
    vector<int> isSymmetricRight(TreeNode* root) { // IN ORDER RNL
        vector<int> result;
        if(root == NULL){
            result.push_back(-101); // INPUT VALUES CONSTRAINED AT -100, -101 would show null
            return result;
        }
        else{
            if(root -> left != NULL || root -> right != NULL){
                result = isSymmetricRight(root->right);
                result.push_back(root->val);
                vector<int> left_traversal = isSymmetricLeft(root->left);
                for(int i =0; i < left_traversal.size(); i++){
                    result.push_back(left_traversal[i]);
                }
            }
            else{
                result.push_back(root->val);
            }
            return result;
        }
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        vector<int> left_traversal = isSymmetricLeft(root->left) ;
        vector<int> right_traversal = isSymmetricRight(root->right);
        
        if(left_traversal.size() != right_traversal.size()){
            return false;
        }
        else{
            for(int i = 0; i < left_traversal.size(); i++){
                if(left_traversal[i] != right_traversal[i]){
                    return false;
                }
            }
            return true;
        }
        
        
        
    }
};