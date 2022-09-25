//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>ans;
        multiset<int>s;
        for(int i = 0; i< k; i++)s.insert(arr[i]);
        auto it = s.end();
        it--;
        ans.push_back(*it);
        for(int i = k; i<n; i++){
            s.erase(s.find(arr[i-k]));
            s.insert(arr[i]);
            it= s.end();
            it--;
            ans.push_back(*it);
            
        }
        return ans;
    }
};
//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends