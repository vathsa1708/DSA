class Solution {
public:
queue<TreeNode*>q;

int count =0;
    int maxDepth(TreeNode* root) {
        if(root==NULL)return count;
        q.push(root);
        
        
        while(q.size()>0)
        {
            int s = q.size();
            for(int i=0;i<s;i++)
            { TreeNode *ans = q.front();
        q.pop();
                if(ans->left!=NULL)
                q.push(ans->left);
                if(ans->right!=NULL)
                q.push(ans->right);
            }
            count++;
            

        }
        return count;
    }
};
