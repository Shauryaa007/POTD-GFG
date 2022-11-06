//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> ans,denoms = {2000,500,200,100,50,20,10,5,2,1};
        vector<int>::iterator it;
        while(N)
        {
            it = lower_bound(denoms.begin(),denoms.end(),N,greater<int>());
            ans.push_back(*it);
            N-=*it;
        }
        return ans;
    }
 
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends