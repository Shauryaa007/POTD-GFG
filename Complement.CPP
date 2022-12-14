//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
     vector<int> findRange(string str, int n) {
        // code here
        int l=0;
        int h=-1;
        int x=0;
        int y=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
             {   if(x<0)
              { 
                  temp=i;
                  x=1;
              }
                else
                  x+=1;
            }
            else
              x-=1;
              if(x>y)
              {
                  y=x;
                  l=temp;
                  h=i;
              }
        }
        if(h==-1)
        return {-1};
        else
         return {l+1,h+1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends