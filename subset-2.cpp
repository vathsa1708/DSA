class Solution {
public:
set<vector<int>>ss;
void dfs(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,int ind)
{
 
ss.insert(temp);
  for(int i=ind;i<nums.size();i++)
  {
      temp.push_back(nums[i]);
      dfs(ans,temp,nums,i+1);
      temp.pop_back();
  }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>temp;
      sort(nums.begin(),nums.end());
      dfs(ans,temp,nums,0);
      for(auto it:ss)
      ans.push_back(it);
      return ans;
    }
};
