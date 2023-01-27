//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int CountWays(string s) {
	    if(s[0] == '0') return 0;
	    int n = s.length();
	    int mod = 1e9+7;
	    
	    vector<int> dp(n+1,1);
	    
	    for(int i = n-1; i >= 0; i--) {
	        int one = 0, two = 0;
	        if(s[i] != '0') {
	            one = dp[i+1];
	            if(i+1 < s.length()) {
	                int temp = stoi(s.substr(i,2));
	                if(temp <= 26)
	                    two = dp[i+2];
	            }
	        }
	        dp[i] = (one+two*1LL)%mod;
	    }
	    
	    return dp[0];
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends