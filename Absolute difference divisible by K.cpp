//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        map<int,int>m;

 

       for(int i=0;i<n;i++)

 

       {

 

           arr[i]=arr[i]%k;

 

           m[arr[i]]++;

 

       }

 

       int ans=0;

 

       for(auto it:m)

 

       {

 

           int a=(it.second*(it.second-1))/2;

 

           ans+=a;

 

       }

 return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends