//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 int dp[100001];
    int mod=1e8;
   
   int fibo (int N){
        if (N == 0) return 1;
        if (N == 1) return 1;
     if (dp[N] != -1) return dp[N];
   return dp[N] = (fibo(N-1)+fibo(N-2))%mod;
    }
    int fillingBucket(int N) {
        // code here
        memset (dp, -1, sizeof (dp));
        return fibo(N);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends