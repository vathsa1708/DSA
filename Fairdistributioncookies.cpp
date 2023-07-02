class Solution {
public:

int ind;
void solve(vector<int>&temp,vector<int>&c,int ind,int &ans,int k)
{
    if(c.size()== ind)
    { 
        int maxi= INT_MIN;
        for(int i=0;i<k;i++)
        {
            maxi = max(maxi,temp[i]);
        }
        ans = min(ans,maxi);
        return;
    }
    for(int i=0;i<k;i++)
    {
        temp[i]+=c[ind];
        solve(temp,c,ind+1,ans,k);
        temp[i]-=c[ind];
    }
}
    int distributeCookies(vector<int>& c, int k) {
        vector<int>temp(k,0);
        int ans =INT_MAX;
        solve(temp,c,0,ans,k);
        return ans;
    }
};
// 1 1 2 2 2 3 4 6 - 7,7,7
// 8 8 10 15 20 - 8,20
