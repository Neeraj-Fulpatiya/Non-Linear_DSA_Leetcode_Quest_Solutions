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
   TreeNode* trimBST(TreeNode* r, int L, int R) {
  if (r == nullptr) return nullptr;
  r->left = trimBST(r->left, L, R);
  r->right = trimBST(r->right, L, R);
  return r->val < L ? r->right : r->val > R ? r->left : r;
}
};