//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string s, string w){
        int count=0;
        int i=0,j=0;
        
        while(i<s.size())
        {
            if(s[i]==w[j])
            {
                s.erase(i,1);
                j++;
                i--;
                
                if(j==w.size())
                {
                count++;
                j=0;
                i=-1;
                }
            }
            
            i++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends