//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{

  public:

    int ans=0;

    int dfs(int node, int par,vector<vector<int>> &adj){

        int ones=0,twos=0;

        for(int child : adj[node]){

            if(child!=par){

                int ret=dfs(child,node,adj);

                

                switch(ret){

                    case 0 : {ones++;break;}

                    case 1 : {twos++;break;}

                }

            }

        }

        

        if(ones>0){

            ans++;

            return 1;

        }

        if(twos>0){

            return 0;    

        }

        return 0;

    }

    

    int countVertex(int n, vector<vector<int>>edges){

        vector<vector<int>> adj(n);

        for(auto v : edges){

            adj[v[0]-1].push_back(v[1]-1);

            adj[v[1]-1].push_back(v[0]-1);

        }

        

        int state=dfs(0,-1,adj);

        return ans;

    }

};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends