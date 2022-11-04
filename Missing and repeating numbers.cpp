/*
Sample Input 1:
1 
5
1 3 5 4 4
Sample Output 1:
2 4
Explanation Of Sample Input 1:
As we can clearly see, among all the numbers from 1 to 5, 2 is not present and 4 is occurring twice. Thus, 2 and 4 are missing and repeating numbers respectively. 
Sample Input 2:
2
10
4 5 2 9 8 1 1 7 10 3
7
7 5 3 2 1 6 6 
Sample Output 2:
6 1 
4 6

*/

//code

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int>p;
    vector<int> map(n+1,0);
    //for(auto i : arr)map[i]++;
    for(int i=0; i<n; ++i)
        map[arr[i]]++;
    for(int i=1; i<n+1; ++i){
        if(map[i] == 0)p.first=i;
        if(map[i] == 2)p.second=i;
        
    }
	return p;
}
