//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &arr) {
        vector<int> v;
        unordered_map<int, int> mp;
        mp[0]=0;
        unordered_set<int> s;
        s.insert(arr[0]);
        for(int i=1; i<n; i++){
            mp[i]=s.size();
            s.insert(arr[i]);
        }
        unordered_map<int, int> mp1;
        s.clear();
        mp1[n-1]=0;
        s.insert(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            mp1[i]=s.size();
            s.insert(arr[i]);
        }
        for(int i=0 ; i<n; i++) v.push_back(mp[i]-mp1[i]);
        return v;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends