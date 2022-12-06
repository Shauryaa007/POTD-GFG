//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	 vector<vector<int>>ans;
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int m=grid.size(),n=grid[0].size();
	    ans.resize(m,vector<int>(n,INT_MAX));
	    
	    for(auto i=0;i<m;i++){
	        for(auto j=0;j<n;j++){
	            if(grid[i][j]){
	                ans[i][j]=0;
	            }
	        }
	    }
	    
	    for(auto i=0;i<m;i++){
	        for(auto j=0;j<n;j++){
	            if(grid[i][j]){
	                dfs(i,j,grid,0);
	            }
	        }
	    }
	    return ans;
	    
	}
	
	void dfs(int i, int j,vector<vector<int>>&grid,int steps){
	    int m=grid.size(),n=grid[0].size();
	    vector<pair<int,int>>dr={{-1,0},{0,-1},{0,1},{1,0}};
	    
	    for(auto r:dr){
	        int x=r.first+i,y=r.second+j;
	        if(x<0|| y<0|| x>=m|| y>=n )continue;
	        if(ans[x][y]>steps+1){
	            ans[x][y]=steps+1;
	            dfs(x,y,grid,steps+1);
	        }
	    }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends