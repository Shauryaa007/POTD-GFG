//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int n=S.size();
        map<char,int> m;
        int mx=0;
        for(int i=0;i<n;i++){
            m[S[i]]++;
            mx=max(mx,m[S[i]]);
        }
        int i=0,j=n-1;
        bool front=true,back=true;
        int count=0;
        while(i<=j){
            if(front){
                if(m[S[i]]==1){
                    i++;
                }
                else{
                    m[S[i]]--;
                    S.erase(i,1);
                    j--;
                    count++;
                    back=true;
                    front=false;
                }
            }
            else if(back){
                if(m[S[j]]==1){
                    j--;
                }
                else{
                    m[S[j]]--;
                    S.erase(j,1);
                    j--;
                    count++;
                    front=true;
                    back=false;
                }
            }
        }
        if(count%2==1){
            reverse(S.begin(),S.end());
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends