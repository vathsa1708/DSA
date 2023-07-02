//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

void dfs(vector<int>&arr,vector<int>&ans,int sum,int N,int ind)
{ ans.push_back(sum);
    for(int i=ind;i<N;i++){
        sum+=arr[i];
        dfs(arr,ans,sum,N,i+1);
        sum-=arr[i];
    }
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum=0;
        vector<int>ans;
        dfs(arr,ans,0,N,0);
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
