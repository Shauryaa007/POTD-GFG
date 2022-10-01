//{ Driver Code Starts
// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

// Position this line where user code will be pasted.

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] grid = new int[n][m];

            for (int i = 0; i < n; i++) {

                for (int j = 0; j < m; j++) {
                    grid[i][j] = sc.nextInt();
                }
            }

            Solution ob = new Solution();
            int ans = ob.countDistinctIslands(grid);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {

  int countDistinctIslands(int[][] grid) 

    {

        // Your Code here

        int n=grid.length;

        int m=grid[0].length;

    

        Set<List<Integer>> st=new HashSet<>();

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<m;j++)

            {

                if(grid[i][j]==1)

                {

                    List<Integer> al=new ArrayList<>();

                    find(i,j,al,st,i,j,grid);

                    st.add(al);

                }

            }

        }

        return st.size();

        

        

    }

    public static void find(int i,int j,List<Integer> ans,Set<List<Integer>> st,int or,int oc,int grid[][])

    {

        if(i<0||j<0||i>=grid.length||j>=grid[0].length||grid[i][j]==0)

        return;

        ans.add(i-or);

        ans.add(j-oc);

        grid[i][j]=0;

        find(i+1,j,ans,st,or,oc,grid);

        find(i-1,j,ans,st,or,oc,grid);

        find(i,j+1,ans,st,or,oc,grid);

        find(i,j-1,ans,st,or,oc,grid);

    }

    
}
