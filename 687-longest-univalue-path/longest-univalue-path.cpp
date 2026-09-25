class Solution {
    int ans = 0;
private:
    int dfs(TreeNode* root, int par) {
        if (!root)
            return 0;
        int len = 0;
        if (root->val != par && par != -1001) {
            int l = dfs(root->left, root->val);
            int r = dfs(root->right, root->val);
            len = 0;
            ans = max(ans, l + r);
            return 0;
        }

        int l =dfs(root->left, root->val);
        int r = dfs(root->right, root->val);
        len = 1 + max(l, r);

        ans = max(ans, l+r);
        return len;
    }

public:
    int longestUnivaluePath(TreeNode* root) {
        dfs(root, -1001);
        return ans;
    }
};

// at each node,, two cases start fresh or continue the sequence and sequence can be valid from both l and r so root->l and root->r forming same sequence, so merging them both together 