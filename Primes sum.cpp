//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {

public:

    bool primeCheck(int x)

    {

        int cnt=0;

        for(int i=1;i*i<=x;i++)

        {

            if(x%i==0 && x/i==i)

            cnt++;

            else if(x%i==0)

            cnt+=2;

        }

        return cnt==2;

    }

    string isSumOfTwo(int N){

        if(N%2==1 && primeCheck(N-2))

        return "Yes";

        else if(N%2)

        return "No";

        for(int i=2;i<=N;i++)

        {

            if(primeCheck(i) && primeCheck(N-i))

            return "Yes";

        }

        return "No";

    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends