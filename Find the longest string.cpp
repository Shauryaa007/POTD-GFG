//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
       string longestString(vector<string> &words)
    {
unordered_set<string>st(words.begin(),words.end());
        string ans="";
        for(auto w:words){
            int i=1;
            for(i=1;i<w.size();i++){
                if(st.count(w.substr(0,i))==0)break;
                
            }
            
            if(i==w.size()){
                if(w.size()>ans.size())ans=w;
                if(w.size()==ans.size())ans=min(ans,w);
            }
        }
       
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends