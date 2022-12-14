/*Sample Input 1:
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2
Sample Output 1:
-1 -1 
4 7
*/

#include <bits/stdc++.h> 
int firstOcc(vector<int>& arr,int n,int k){
    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end){
        
        
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
            
            
        }
        else if(arr[mid]<k){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;
}
int lastOccu(vector<int>& arr,int n,int k){
    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end){
        
        
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
            
            
        }
        else if(arr[mid]<k){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;

} 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOccu(arr,n,k);
    return p;
}
