//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<N;i++)
        {
            int ele=arr[i];
            if(mp[ele]<2) // if it is marked less than 2 times
            {
                for(int j=ele;j<=maxi;j+=ele)
                {
                    mp[j]++;
                }
            }
        }
        
        for(int i=0;i<N;i++)
        {
            int ele=arr[i];
            if(mp[ele]>1) count++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends