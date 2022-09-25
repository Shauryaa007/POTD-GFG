//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String s = in.readLine();
            int k = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            System.out.println(ob.ReFormatString(s, k));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{
    
    static String ReFormatString(String s, int k){
        
        // code here
        
        StringBuilder sb = new StringBuilder();
        int count = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            
            if (s.charAt(i) == '-') 
                continue;
                
            if (count == k) {
            
                sb.append('-');
                count = 0;
            }
            sb.append(s.charAt(i));
            count++;
            
        } 
        return sb.reverse().toString().toUpperCase();

    }
}