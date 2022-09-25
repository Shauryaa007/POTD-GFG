//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	
	bool isprm(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
	
	bool iscmp(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return false;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return true;
  
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
  
    return false;
}

		int Count(int L, int R){
		    int cmp=0,prm=0;
		    
		    for(int i=L;i<=R;i++)
		    {
		        if(iscmp(i))
		          cmp++;
		          
		        if(isprm(i))
		          prm++;
		    }
		    
		    return cmp-prm;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends