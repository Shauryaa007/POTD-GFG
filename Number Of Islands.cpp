//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     void dfs(vector<vector<int>> &arr,int i,int j){

      int n = arr.size();

      int m = arr[0].size();

      if(i < 0 || i >=n || j <0 || j >= m || arr[i][j] == 0 ){

          return;

      }

      arr[i][j] = 0;

      dfs(arr,i-1,j);

      dfs(arr,i,j-1);

      dfs(arr,i+1,j);

      dfs(arr,i,j+1);

  }

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {

        // code here

        vector<int> ans;

        vector<vector<int>> arr;

        int k = operators.size();

        for(int i = 0 ; i < n ; i++){

            vector<int> temp;

            for(int j = 0 ; j < m ; j++){

                temp.push_back(0);

            }

            arr.push_back(temp);

        }

        for(int i = 0 ; i < k ; i++)

        {

            vector<int> temp  = operators[i];

            arr[temp.front()][temp.back()] = 1;

            for(int ii = 0 ; ii< i ; ii++){

                vector<int> tempp  = operators[ii];

                arr[tempp.front()][tempp.back()] = 1;

            }

            int cnt = 0;

        for(int k = 0 ; k < n ; k++){

            for(int j = 0 ; j < m ; j++){

                if(arr[k][j] == 1){

                    cnt++;

                    dfs(arr,k,j);

                }

            }

        }

        ans.push_back(cnt);

           

        }

        

        return ans;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends