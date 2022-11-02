//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& a, int k){

        //Code here

        

        sort(a.begin(),a.end());

        int ans=INT_MAX;

        int n=a.size();

        for(int i=n-1;i>=0;i--){

            int j=lower_bound(a.begin(),a.end(),a[i]-k)-a.begin();

            int p=j-i+n-1;

            ans=min(ans,p);

        }

        return ans;

    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends