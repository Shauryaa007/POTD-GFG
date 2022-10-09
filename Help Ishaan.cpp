//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		bool prime(int n)
	    {
	        if(n<=1)
	            return false;
	        for(int i=2;i<=sqrt(n);i++)
	        {
	            if(n%i==0)
	                return false;
	        }
	        return true;
	    }
		int NthTerm(int n){
		    // Code here
		    int i=n;
		    int j=n;
		    while(true)
		    {
		        if(prime(i))
		            break;
		        if(prime(j))
		            break;
		        i--;
		        j++;
		    }
		    return min(abs(n-i),abs(n-j));
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends