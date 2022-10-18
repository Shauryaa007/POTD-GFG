//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)

 {

 // Your code goes here

 vector <int> vc;

 // printing top diagonal elements including longest diagonal

 for(int i=0;i<n;i++){

     int j=0,k=i;

     while(k>=0){

         vc.push_back(A[j][k]);

         j++;

         k--;

     }

 }

 // printing elements below longest diagonal

 for(int i=1;i<n;i++){

     int j=i,k=n-1;

     while(j<=n-1){

         vc.push_back(A[j][k]);

         j++;

         k--;

     }

 }

 return vc;

 }

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends