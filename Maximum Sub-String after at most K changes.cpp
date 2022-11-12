//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    vector<int>v(26,0);
		    
		    int pre=0;
		    int ans=0;
		    for(int i=0;i<s.length();i++)
		    {
		        v[s[i]-'A' ]++;
		        int curr=solution(v,k);
		        if(curr==-1)
		        {
		             v[s[pre++]-'A']--;
		        }
		        else
		        {
		            ans=max(ans,curr);
		        }
		    }
		    
		    return ans;
		}
		
		int solution(vector<int>v,int k)
		{int same=0,sum=0;
		    for(int i=0;i<v.size();i++)
		    {
		        sum+=v[i];
		        if(v[i]>same) same=v[i];
		    }
		    
		    int diff=sum-same;
		    
		    if(diff<=k) return same+diff;
		    else return -1; 
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends