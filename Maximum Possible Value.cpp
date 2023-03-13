//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int n,vector<int> a, vector<int> b) {
        long long res = 0;
        int count = 0;
        int mini = INT_MAX;
        
        for(int i=0; i<n; i++){
            int stick = a[i];
            int unit = b[i];
            if(unit > 1){
                res += 2 * (unit / 2) * stick;
                count += (unit / 2);
                mini = min(mini, stick);
            }
        }
        
        if(count % 2 == 1){
            res -= (2*mini);
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends