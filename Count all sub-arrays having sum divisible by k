/*
2
3 2
2 3 1
4 1
1 2 3 4
Sample Output 1:
3
10
Explanation Of Sample Input 1:
Test Case 1:

Given ‘ARR’ is { 2, 3,1 } and ‘K’ is ‘2’.
All the sub-array with sum is divided by ‘K’ are -
{ 2 }  because the sum is 2 and sum 2 is divisible by 2
{ 3, 1 } because the sum is 3 + 1 = 4 and sum 4 is divisible by 2.
{ 2, 3, 1 } because the sum is 2 + 3 + 1 = 6 and sum 6 is divisible by 2.

Hence there is a total of three subarrays that has sum divisible by 2.


Test Case 2:

Given ‘ARR’ is { 1, 2, 3, 4 } and ‘K’ is ‘1’.
Given ‘K’ is 1 that’s why each and every sub-arrays sum will be divisible by ‘1’ and with the size of ‘4’ array total number of subarray possible is ‘( 4*5 /2 ) = 20/2 = 10’.
All possible subarray -
{ 1 }, { 2 }, { 3 }, { 4 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 1, 2, 3 }, { 2, 3, 4 }, { 1, 2, 3, 4 } and all subarray sum is divisible by ‘1’.
Hence there are overall 10 subarrays that has sum divisible by ‘1’.
Sample Input 2:
2
4 3
1 4 5 2
3 2
1 1 2
Sample Output 2:
2
3

*/

//code

#include <bits/stdc++.h> 
int subArrayCount(vector<int> &arr, int k) {
    // Write your code here.
    unordered_map<int ,int> remMap;
    remMap[0]=1;
    int count =0;
    long sum=0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        sum +=arr[i];
        int rem=(sum%k+k)%k;
        if(remMap.find(rem) != remMap.end()){
            count += remMap[rem];
            remMap[rem] +=1;
        }
        else{
            remMap[rem] = 1;
        }
    }
    return count;
}
