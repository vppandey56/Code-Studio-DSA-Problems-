/*
Sample Input 1:
1
9
Sample Output 1:
2
Explanation For Sample Input 1:
There are 2 ways to represent N in the (A^3 + B^3) form ie. {(1, 2), (2, 1)}.
Eg. 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9. 
Sample Input 2:
1
27
Sample Output 2:
1
Explanation For Sample Input 2:
There is only 1 way to represent N in the (A^3 + B^3) form ie. {(3, 0)}.
Eg. 3^3 + 0^3 = 27.


*/

//code

#include <bits/stdc++.h> 
bool isperfectCube(int N){
    for(int i=1; i*i*i<=N; i++){
        if(i*i*i==N){
            return true;
        }
    }
    
    return false;
}
int countCubeSumPairs(int n) {
    // Write your code here.
    int count =0;
    if(isperfectCube(n)){
        count++;
    }
    for(int A=1; A*A*A<=n; A++){
        int toCheck=n-(A*A*A);
        if(isperfectCube(toCheck)){
            count++;
        }
    }
    return count;
    
}
