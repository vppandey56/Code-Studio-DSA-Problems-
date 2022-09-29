/*
Sample Input 1:
1
3
1 1 2
Sample Output 1:
1
Explanation of Sample Input 1:
1 is repeated in the array, hence function returns 1.
Sample Input 2:
3
5
1 3 4 2 2
5
3 1 3 4 2
3
1 1 1
Sample Output 2:
2
3
1

*/

//Code
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    
    //intialization
    int tortoise=arr[0];
    int hare=arr[0];
    
    do{
        //tortoise move single step
        tortoise=arr[tortoise];
        // hare move two step
        hare=arr[arr[hare]];   
    }
    //intersection point of two runner
    while(tortoise !=hare);
    tortoise=arr[0];
    while(tortoise !=hare){
        tortoise=arr[tortoise];
        hare=arr[hare];
    }
    return hare;
    
}
