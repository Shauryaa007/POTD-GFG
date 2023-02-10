//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

int maxInstance(const std::string& text) {
    std::array<int, 26> charCounts{};
    for (char c : text) {
        ++charCounts[c - 'a'];
    }
    
    int b = charCounts['b' - 'a'];
    int a = charCounts['a' - 'a'];
    int l = charCounts['l' - 'a'];
    int o = charCounts['o' - 'a'];
    int n = charCounts['n' - 'a'];
    
    return std::min({b, a, l / 2, o / 2, n});
}

int main() {
    std::string text = "nlaebolko";
    std::cout << maxInstance(text) << '\n';
    return 0;
}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends