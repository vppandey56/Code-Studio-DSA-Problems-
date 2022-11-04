/*
Sample Input 1:
1
3 5
1 2 2 3 1
Sample Output 1:
4
Explanation Of Sample Input 1:
The ayush will read the chapter as follows,
Day 1 : 1 , 2         Time required : 3
Day 2 : 3             Time required : 2
Day 3 : 4 , 5         Time required : 4
So the maximum time in a day is 4.
Sample Input 2:
1
4 7
2 2 3 3 4 4 1 
Sample Output 2:
6
Explanation Of Sample Input 2:
The ayush will read the chapter as follows,
Day 1 : 1 , 2          Time required : 4
Day 2 : 3 , 4          Time required : 6
Day 3 : 5              Time required : 4
Day 4 : 6 , 7          Time required : 5
So the maximum time in a day is 6.

*/

//code

#include <bits/stdc++.h> 
bool isPossible(long long x, int n, int m, vector<int>& time){
    int days=1;
    long long daySum=0;
    
    for(int i=0; i<m; i++){
        if(daySum + time[i]<=x){
            daySum += time[i];
        }
        else{
            days += 1;
            daySum = time[i];
        }
    }
    return days <= n;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    int minimum=0;
    long long maximum=0;
    
    for(int i=0; i<m;i++){
        maximum += time[i];
        minimum = max(minimum,time[i]);
    }
    long long l=minimum, r=maximum,ans;
    while(l<=r){
        long long mid=(l+r)/2;
        if(isPossible(mid,n,m,time)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
