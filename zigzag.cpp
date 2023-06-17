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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int flag = 0;
        vector<int>temp;
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        
        while(q.size()>0)
        {
            int n = q.size();
            temp.clear();
          for(int i =0;i<n;i++)
          {
              TreeNode *it = q.front();
              q.pop();
             temp.push_back(it->val);
                  if(it->left!=0)
              {
                q.push(it->left);
              }
               if(it->right!=0)
              {
                  q.push(it->right);

              }
           
             
              }
              if(flag == 0)
              {
                  ans.push_back(temp);
                  flag =1;
              }
              else if(flag == 1)
              {
                  reverse(temp.begin(),temp.end());
                  ans.push_back(temp);
                  flag = 0;
              }
              

          }
          
        
        return ans;
    }
};
