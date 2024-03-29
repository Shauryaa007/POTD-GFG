//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      
      unordered_set<long long int> rset, cset;
      vector<long long int> ans;
      
      for(int i=0; i<k; i++){
          
          long long int val = 0;
          long long int row = arr[i][0], col = arr[i][1];
          rset.insert(row);
          cset.insert(col);
          long long int rsize = rset.size(), csize = cset.size();
          
          val = n * n - (n * (rsize + csize) - rsize * csize);
          
          ans.push_back(val);
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
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends