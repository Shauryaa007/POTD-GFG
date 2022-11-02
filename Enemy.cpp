//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
         int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int> r,c;
            for(int i=0;i<k;++i)
            {
                r.push_back(enemy[i][0]);
                c.push_back(enemy[i][1]);
            }
            sort(r.begin(),r.end());
            sort(c.begin(),c.end());
            int mxc=INT_MIN,mxr=INT_MIN,a=0,b=0;
            for(int i=0;i<k;++i)
            {
                mxc=max(mxc,c[i]-a-1);
                a=c[i];
                mxr=max(mxr,r[i]-b-1);
                b=r[i];
            }
            mxc=max(mxc,m-a);
            mxr=max(mxr,n-b);
            return mxc*mxr;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends