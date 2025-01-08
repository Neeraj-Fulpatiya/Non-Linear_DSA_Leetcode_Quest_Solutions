class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        deque<TreeNode*> dq;
        dq.push_back(root);
        bool lefttoright = true;

        while (!dq.empty()) {
            int len=  dq.size();
            vector<int> vec;
            while (len--){
                if (!lefttoright) {
                    root = dq.back();
                    dq.pop_back();
                    vec.push_back(root->val);
                    if (root->right) dq.push_front(root->right);
                    if (root->left) dq.push_front(root->left);
                }
                else {
                    root = dq.front();
                    dq.pop_front();
                    vec.push_back(root->val);
                    if (root->left) dq.push_back(root->left);
                    if (root->right) dq.push_back(root->right);
                }
            }
            ans.push_back(vec);
            lefttoright = !lefttoright;
        }
        return ans;
    }
};