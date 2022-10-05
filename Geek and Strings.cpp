//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> prefixCount(int N, int Q, string li[], string q[])

    {

        unordered_map<string,int>mp;

        for(int i=0;i<N;++i)

        {

            string temp="";

            for(int j=0;j<li[i].size();++j)

            {

                temp+=li[i][j];

                mp[temp]+=1;

            }

        }

        vector<int>res;

        for(int i=0;i<Q;++i)

        {

            res.push_back(mp[q[i]]);

        }

        return res;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int Q, N, i = 0, x;
	    cin>>N;
	    string s;
	    string li[N];
	    for(int i = 0;i < N;i++)
	        cin>>li[i];
	    cin>>Q; 
	    x = Q;
	    string query[Q];
	    while(Q--){
	        cin>>s;
	        query[i++] = s;
	    }
	    
	    Solution ob;
	    vector<int> ans = ob.prefixCount(N, x, li, query);
	    for(auto i: ans) 
	        cout<<i<<"\n";
    }
    return 0;
}
// } Driver Code Ends