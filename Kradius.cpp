class Solution {
public:
    vector<int> getAverages(vector<int>& a, int k) {
        int n =a.size();
       vector<int>ans(n,-1);
       if(n<(2*k+1))
       return ans;
       vector<long long>pre(n+1);
       for(int i=0;i<n;i++)
       {
           pre[i+1]=pre[i]+a[i];

       }
       for(int i=k;i+k<n;i++)
       {
           ans[i]=(pre[i+k+1]-pre[i-k])/(2*k+1);

       }
       return ans;


    }
};
