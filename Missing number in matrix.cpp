//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
      bool row(vector<vector<int> >& matrix, int n)

     {

        int r1=0;

        for(int i=0;i<n;i++)

        {

            r1=r1+matrix[0][i];

        }

 

        for(int i=1;i<n;i++){

            int r=0;

            for(int j=0;j<n;j++){

                r+=matrix[i][j];

            }

            if(r!=r1){

                return false;

            }

        }

        return true;

    }

    

    // FOR COLUMN

    

     bool col(vector<vector<int> >& matrix, int n)

     {

 

        int c1=0;

        for(int i=0;i<n;i++)

        {

            c1+=matrix[i][0];

        }

   

        for(int i=1;i<n;i++){

            int c=0;

            for(int j=0;j<n;j++)

            {

                c=c+matrix[j][i];

            }

            if(c!=c1)

            {

                return false;

            }

        }

        return true;

    }

    

      // FOR DIAGONAL

    

    bool dia(vector<vector<int> >& matrix, int n)

    {

        int d1=0,d2=0;

        

        for(int i=0;i<n;i++)

        {

            d1+=matrix[i][n-1-i];

        }

        for(int i=0;i<n;i++)

        {

            d2+=matrix[i][i];

        }

        return (d1==d2);

    }

    

    // MAIN CODE 

    

    long long int MissingNo(vector<vector<int> >& matrix) 

    {

        

        long long int ans= 0,r,c;

 

        int n=matrix.size();

        // Here i find posistion of 0

        

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<n;j++)

            {

                if(matrix[i][j]==0)

                {

                     r=i;

                     c=j;

                }

               

            }

            

        }

        if(r==0)

        {

            for(int i=0;i<n;i++)

            {

                ans=ans+(matrix[1][i]-matrix[0][i]);

            }

            matrix[r][c]=ans;

        }

 

        else

        {

            for(int i=0;i<n;i++)

            {

                  ans+=(matrix[0][i]-matrix[r][i]);

            }

            matrix[r][c]=ans;

        }

        

        if(row(matrix,n) && col(matrix,n) && dia(matrix,n) && ans>0)

        {

            return ans;

        }

        

        return -1;

    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends