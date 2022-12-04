//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:


    bool check(vector<int>v,int k,int n,int x)
    {
        int count=1;
       int  last=v[0];
        
        for(int i=0;i<n;i++)
        {
            if(v[i]-last>=x)
            {
            last=v[i];
            count++;
            }
            
            if(count==k) return true;
        }
        
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        
        sort(stalls.begin(),stalls.end());
        
        int low=1,high=stalls[n-1]-stalls[0];
        int res=0;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(check(stalls,k,n,mid)) 
            {
                res=max(res,mid);
                
                low=mid+1;
            }
            
            else
            {
                high=mid-1;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends