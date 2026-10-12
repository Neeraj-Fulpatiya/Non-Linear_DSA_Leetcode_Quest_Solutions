
// the  question seems easy to do from the bfs but its hard to implemetd in a code as it requires queue.(as per my point of view you may differ)

// the cousins must be on the same level so first check whether they are in the same level or not
//  then check whether they are children of same parent or not .
// if they are children of same parent then they can never be cousin.
// you may think of your real cousins they are of same level generation and child of same parent cant be cousin.
// here done is its dfs approach  above logic is applied here.
class Solution {
public:
    int xdepth, ydepth, xparent, yparent;
    // depth of x and y and parent of x and y.
    void depth(TreeNode* root, int x, int y, int dep, int par_val){
    if(root==NULL) return;
    
    if(root->val==x){
        xdepth=dep;
        xparent=par_val;
        return;
    }
    if(root->val==y){
        ydepth=dep;
        yparent=par_val;
        return;
    }
    depth(root->left, x, y, dep+1, root->val);
    depth(root->right, x, y, dep+1, root->val);
}
bool isCousins(TreeNode* root, int x, int y) {
    // simple if you have the same value as parent then you will nver be cousinn how can a parent be cousin of the child :(
    if(root->val==x || root->val==y) return false;

    // check for the root with level zero and first parent val zero.
    depth(root, x, y, 0, 0);
    
    //if they have the same level and they dont have the same parent that means they are the cousins. 
    if(xdepth==ydepth && xparent!=yparent) return true;
    //otherwise false.
    return false;
}
};