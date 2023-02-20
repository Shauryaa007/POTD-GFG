//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
   #define mod 1000000007

    int countPaths(int N){

        // code here 

        long long int prevO = 1, prevA = 0, prevB = 0, prevC = 0;

        

        for(int i=1; i<=N; i++){

            int curO, curA, curB, curC;

            curO = (prevA + prevB + prevC)%mod;

            curA = (prevO + prevB + prevC)%mod;

            curB = (prevO + prevA + prevC)%mod;

            curC = (prevA + prevB + prevO)%mod;

            

            prevO = curO;

            prevA = curA;

            prevB = curB;

            prevC = curC;

        }

        

        return int(prevO);

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends