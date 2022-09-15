/*

Sample Input 1:
1
4
2 1 5 7
9 3
Sample Output 1:
True
Explanation For Input 1:
Pairs will be {2,1} and {5,7} whose sums are 3 and 12 which will give remainder 3 when divided by 9.
Sample Input 2:
1
5
6 6 3 0 0
9 3
Sample Output 2:
False
Explanation For Input 2:
As pairs would be {6, 6} and {3, 0}, but second 0 will not be able to make pair with any of the elements, thus it is not possible to make valid pairs.

*/

//code


#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int n=arr.size();
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == s){
                vector<int>pair(2);
                pair[0]=arr[i];
                pair[1]=arr[j];
                ans.push_back(pair);
            }
        }
    }
    vector<vector<int> > res(ans.size(),vector<int>(2,0));
    for(int i=0; i<ans.size(); i++){
        int a=ans[i][0] , b=ans[i][1];
        
        res[i][0]=min(a,b);
        res[i][1]=max(a,b);
    }
    sort(res.begin(),res.end());
    return res;
}


//2nd code

#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
                
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
