//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    bool check(string &s1, string &s2)
    {   
        vector<int> count(26,0);
        
        for(auto &it : s1)
        count[it-'a']++;
        
        for(auto &it : s2)
        count[it-'a']--;
        
        for(auto &it : count)
        if(it!=0)
        return false;
        
        return true;
    }
    vector<Node*> findAnagrams(struct Node* head, string s) 
    {
       vector <Node*> ans;
       Node *temp = head, *head1 = head;
       
       string s2;
       int n = s.size();
       
       bool flag = true;
       while(temp!=NULL)
       {
           s2.push_back(temp->data);
           
           if(s2.size()>n)
           {
               s2.erase(0,1);
               head1 = head1->next;
           }
           
           if(s2.size()==n)
           {
               if(check(s,s2))
               {
                   ans.push_back(head1);
                   head1 = temp->next;
                   temp->next = NULL;
                   temp = head1;
                   flag = false;
                   s2.clear();
               }
           }
           
           if(flag)
           temp = temp->next;
           flag = true;
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends