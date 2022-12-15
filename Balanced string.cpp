//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
  
    string str="abcdefghijklmnopqrstuvwxyz";
    
    string balancedString(int n,int sum) {
        
        if(n>26)
        {
            return str + balancedString(n-26,sum);
        }
        
        else
        {
            if(n%2==0)
            {
                return str.substr(0,n/2)+str.substr(26-n/2,n/2);
            }
            
            else
            {
                
                if(sum%2==0)
                {
                    return str.substr(0,(n+1)/2)+str.substr(26-(n-1)/2,(n-1)/2);
                }
                
                else
                {
                    return str.substr(0,(n-1)/2)+str.substr(26-(n+1)/2,(n+1)/2);
                }
            }
        }
    }
    
    string BalancedString(int n) {
        
                int sum=0;
                int x=n;
                while(x>0)
                {
                    sum=sum+(x%10);
                    x/=10;
                }
                
                return balancedString(n,sum);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends