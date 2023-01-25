//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.size(),dup=0;
        string temp="";
        for(int i=0;i<n;i++){
            temp+=s[i];
            if((i+temp.size()) < n && temp == s.substr(i+1,temp.size())){
                int t=temp.size();
                dup=max(t,dup);
            }
        }
        int ans = n-dup+1;
        if(dup>0)
            return ans;
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends