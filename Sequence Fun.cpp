//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    long long l=2;
		    long long res;
		    
		    if(n==1)
		    {
		        return 2;
		    }
		 
		    for(int i=2;i<=n;i++)
		    {
		        res=(l*i)%(1000000007)+1;
		        l=res;
		        
		    }
		    
		    return res%1000000007;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends