//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

 

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int j=0;
            
            for(int i=0;i<a.size();i++){
                j=i;
                while(j<n  && a[j]%2==0){
                   j++;
                }
               
                if(j-i>1) sort(a.begin()+i,a.begin()+j,greater<int>());  
                
               
                int k=j;
                while(k<n && a[k]%2!=0){
                    k++;
                }
               
                if(k-j>1)sort(a.begin()+j,a.begin()+k,greater<int>());
               
                if(k>=n-1){
                    break;
                }
                --k;
                i=k;
                
            }
            
            return a;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends