//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define mod 1000000007

class Solution{
public:
    int totalWays(int n, vector<int>cap) {
        long long pro=1;
        sort(cap.begin(),cap.end());
        for(int i=0;i<n;i++)
        {
            cap[i]=cap[i]-i;
            
            pro=(pro%mod *cap[i]%mod)%1000000007;
        }
        
        return pro%1000000007;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends