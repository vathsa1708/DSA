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
int maxi =INT_MIN;
int dfs(TreeNode *root)
{
    if(root==NULL)
    return 0;
    int left =dfs(root->left);
    if(left<0)
    left =0;
    int right = dfs(root->right);
    if(right<0)
    right =0;
    int val = root->val;
    maxi = max(maxi,val+left+right);
    return max(left,right)+val;
}
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};
