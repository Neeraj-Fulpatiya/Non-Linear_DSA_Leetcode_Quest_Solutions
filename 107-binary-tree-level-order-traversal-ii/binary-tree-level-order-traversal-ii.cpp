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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        int c=0;
        vector<vector<int>>v;
         if(!root)
         return {};

         q.push(root);
         

         while(!q.empty()){
             vector<int>a;
             int size=q.size();

             while(size--){
                 TreeNode* curr=q.front();
                 q.pop();

                 

                 a.push_back(curr->val);
                 if(curr->left)
                 q.push(curr->left);

                 if(curr->right)
                 q.push(curr->right);
             }
             
             v.push_back(a);

         }
         reverse(v.begin(),v.end());
         return v;
        
    }
};