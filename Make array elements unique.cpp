//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   long long int minIncrements(vector<int> a, int n) {

        // Code here

        long long int count=0;

        map<int ,int> mapy;

        for(int i=0;i<a.size();i++)

        {

            mapy[a[i]]++;

        }

        for(int i=0;i<a.size();i++)

        {

            if(mapy[a[i]]>=2)

            {

                mapy[a[i]]--;

                while(mapy.find(a[i])!=mapy.end())

                {

                    a[i]++;

                    count++;

                }

                mapy[a[i]]++;

            }

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
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends