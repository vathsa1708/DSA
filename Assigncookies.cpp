class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0;
        int j=0;
        int count =0;
        int a = g.size();
        int b = s.size();
        while(i<a and j<b)
        {
            if(s[j]>=g[i])
            {
                i++;
                j++;
                count++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};
