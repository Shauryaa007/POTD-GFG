//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> a;
        for (int i=0; i<arr.size(); i++) {
            if (a.size() == 0)
                a.push_back(arr[i]);
            else if (arr[i] >= 0 && a.back() < 0)
                a.pop_back();
            else if (arr[i] < 0 && a.back() >= 0)
                a.pop_back();
            else
                a.push_back(arr[i]);
        }
        
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends