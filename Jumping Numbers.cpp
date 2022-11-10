//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long X) {
    string s = to_string(X);
    long long n = s.size(), poss = -1;
    char poss_val = '?';
    for(long long x = 1; x < n; x++){
        if(abs(s[x] - s[x - 1]) != 1){
            for(long long z = x; z > 0; z--){
                if(s[z] >= s[z - 1] and s[z] != '0'){
                    poss = z;
                    if(s[z - 1] + 1 < s[z]){
                        poss_val = s[z - 1] + 1;
                    }else{
                        poss_val = s[z - 1] - 1;
                    }
                    break;
                }
            }
            if(poss == -1){
                poss = 0;
                if(s[0] == '1'){
                    poss_val = '9';
                    n--;
                }else{
                    poss_val = s[0] - 1;
                }
            }
            break;
        }
    }
    if(poss == -1){
        return X;
    }
    string res_big = "";
    for(long long x = 0; x < poss; x++){
        res_big += s[x];
    }
    res_big += poss_val;
    
    for(long long x = poss + 1; x < n; x++){
        if(res_big[x - 1] == '9'){
            res_big += '8';
        }else{
            res_big += (res_big[x - 1] + 1);
        }
    }
    return stoll(res_big);
}
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends