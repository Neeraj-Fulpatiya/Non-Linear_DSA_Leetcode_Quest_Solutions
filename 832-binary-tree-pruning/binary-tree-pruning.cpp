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
    void iot(TreeNode* root, bool &res){
        if (root==NULL){return ;}
        if (root->left){
            if (root->left->val==0 && root->left->left==NULL && root->left->right==NULL)
            {root->left=NULL;res=true;}
            else {iot(root->left,res);}
        }
        if (root->right){
            if (root->right->val==0 && root->right->left==NULL && root->right->right==NULL)
            {root->right=NULL;res=true;}
            else {iot(root->right,res);}
        }
    }
    TreeNode* pruneTree(TreeNode* root) {
        bool res=true;
        while (res){res=false;iot(root,res);}
        if (root && root->left==NULL && root->right==NULL 
        && root->val==0){return NULL;}
        return root;
    }
};