//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int mod = 1e9+7;
    int dpMemo(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
        
        if(i >= 0 && j >= 0 && grid[i][j]==0) {
           return 0;
        }
        if(i==0 && j==0){
            return 1;
        }
        
        if(i<0 || j<0 ){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up=dpMemo(i-1,j,grid,dp);
        int left = dpMemo(i,j-1,grid,dp);
        return dp[i][j]=(up+left)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return dpMemo(n-1,m-1,grid,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends