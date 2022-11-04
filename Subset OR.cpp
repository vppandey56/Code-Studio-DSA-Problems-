/*
Sample Input 1 :
1
6
2 6 2 8 4 5
Sample Output 1 :
3
Explanation Of Sample Output 1 :
15 is the maximum value of OR and set elements are 8, 6, and 5. 
Sample Input 2 :
1
5
5 1 3 4 2
Sample Output 2 :
 2

*/

//code

#include <bits/stdc++.h> 
int helper(vector<int> &a, int n, int k, int curr, vector<vector<int>> &dp){
    if(n<=0){
        if(k==curr){
            return 0;
        }
        else{
            return 1000000000;
        }
    }
    if(dp[n][curr] != -1){
        return dp[n][curr];
    }
    int x=helper(a,n-1,k,curr,dp);
    int y=1+helper(a,n-1,k,curr | a[n-1],dp);
    return dp[n][curr]=min(x,y);
}
int subsetOR(vector<int> &a) {
    //    Write your code here
    int n=a.size();
    int k=0;
    
    for(int i=0;i<n;i++){
        k |=a[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    int ans=helper(a,n,k,0,dp);
    return ans;
}
