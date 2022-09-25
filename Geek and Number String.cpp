//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string resultant(string s,int i)
    {
        string res="";
        
        res=res+s.substr(0,i)+s.substr(i+2,s.length()-i-2);
            
       return res;     
        
    }

    int minLength(string s, int n) {
        
        
        for(int i=0;i<s.length()-1;i++)
         {
             string t=s.substr(i,2);
              if(t=="12"|| t=="21"|| t=="34"|| t=="43"|| t=="56"|| t=="65"|| t=="78"|| t=="87"|| t=="09"|| t=="90")
              {
                  s=resultant(s,i);
                  i=-1;
              }
            
            
        }
        
        return s.length();
    
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends