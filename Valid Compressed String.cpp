//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
        int i = 0, j = 0;
        int n = s.length(), m = t.length();
        
        while(j < m) {
            if(isalpha(t[j])) {
                if(s[i] != t[j])
                    return 0;
                j++;
                i++;
            }
            else {
                string temp = "";
                while(j < m && isdigit(t[j])) {
                    temp += t[j];
                    j++;
                }
                int num = stoi(temp);
                //cout<<num<<" ";
                i += (num);
            }
            
            if(i > n)
                return 0;
        }
        
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends