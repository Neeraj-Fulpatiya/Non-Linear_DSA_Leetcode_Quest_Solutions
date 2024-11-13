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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(root==NULL)
        {
            return new TreeNode(val);
        }
        if(root->val <=val)
        {
            TreeNode * newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;

        }
      TreeNode* curr=root;
      TreeNode*prev=root;
      bool flag=true;
       TreeNode * newroot=new TreeNode(val);
      while(curr!=NULL)
      {
        if(curr->val <val)
        {
            
            prev->right=newroot;
            newroot->left=curr;
            flag=false;
            break;
        }
        prev=curr;
        curr=curr->right;
      }
      if(flag==true)
      {
        prev->right=newroot;
      }
      return root;

        
    }
};