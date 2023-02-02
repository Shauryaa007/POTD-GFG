//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int s , start; 
  long long  ans = -1;
  vector<long long > dp ; 
    void check(int  src ,  map<int ,vector<int>> & adj , vector<long long>&vis , vector<long long >&dfsvis , long long sum , vector<long long > &par )
    {
        vis[src] =1 ; 
        dfsvis[src] =1 ; 
        dp[src] =sum ; 
        for(auto it : adj[src])
        {
            if(!vis[it])
            {
                par[it] = src; 
                check(it , adj , vis , dfsvis , sum+it, par );
                
            }
            else if(dfsvis[it])
        {
            if(par[it]==-1)
            {
                // cout << it <<" "<< dp[src] << endl ;
                ans=  max(ans , 1LL*dp[src] ) ;
                
            }
            else
            ans = max(ans , 1LL*(dp[src]-dp[par[it]]) ) ;
        }
        }
        dfsvis[src]= 0  ; 
    }
  
  
  long long largestSumCycle(int N, vector<int> e)
  {
    // code here
    map<int ,vector<int>> adj ; 
    for(int i =0 ; i<e.size(); i++)
    {
        if(e[i]!=-1)
        adj[i].push_back(e[i]) ;
    }
    dp.resize(N, 0) ; 
       vector<long long> vis(N , 0 ) , par(N , -1 ) ;
     vector<long long > dfsvis(N , 0 ) ;
    
    
     for(int i  =0 ; i<N ; i++ )
     {
         if(!vis[i])
         {
             long long sum= 0;
            //  cout << i << endl; 
             check(i , adj , vis , dfsvis , i , par);
         }
     }
    return ans ; 
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends