class Solution {
public:
void dfs(int index,int n,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(index>=n)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[index]);
    dfs(index+1,n,nums,temp,ans);
    temp.pop_back();
    dfs(index+1,n,nums,temp,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        int n = nums.size();
        dfs(0,n,nums,temp,ans);
        return ans;

    }
};
