//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int> > matrix(n,vector<int>(n,0));
        int q=Queries.size();
        for(int i=0;i<q;i++){
            int a,b,c,d;
            a=Queries[i][0];
            b=Queries[i][1];
            c=Queries[i][2];
            d=Queries[i][3];
            for(int j=a;j<=c;j++){
                matrix[j][b]+=1;
                if(d+1<n)
                 matrix[j][d+1]-=1;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        return matrix;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;
        vector<vector<int>> Queries;
        for (int i = 0; i < q; i++) {
            vector<int> cur(4);
            for (int j = 0; j < 4; j++) cin >> cur[j];
            Queries.push_back(cur);
        }
        Solution obj;
        vector<vector<int>> ans = obj.solveQueries(n, Queries);
        for (auto i : ans) {
            for (auto j : i) cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends