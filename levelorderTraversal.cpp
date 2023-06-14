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
 vector<vector<int>>ans;

    vector<vector<int>> levelOrder(TreeNode* root) {
    if(root==NULL) return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    { vector<int>temp;
        int s = q.size();
        for(int i =0;i<s;i++)
        {
            TreeNode *node= q.front();
            q.pop();
          if(node->left!=NULL)
        {  
            
            q.push(node->left);
        }
        if(node->right!=NULL)
        {  
            
            q.push(node->right);
        }   
        temp.push_back(node->val);
        }
    ans.push_back(temp);
       
    }
    return ans;
    }
};
