//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
   int swapBitGame(long long N){
        
        unsigned int count = 0;
        while (N) {
         count += N & 1;
          N >>= 1;
         }
         
         if(count%2==0)
          return 2;
          
         else return 1; 
    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.swapBitGame(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends