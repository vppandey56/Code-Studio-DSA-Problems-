/*
Sample Input 1 :
2
4 1 
4 2
Sample Output 1 :
10
24 
Explanation of the Sample Input 1:
In the first test case, the answer is 10 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 + 2 + 3 + 4 is equal to 10.


In the second test case, the answer is 25 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 * 2 * 3 * 4 is equal to 24.
Sample Input 2 :
2
5 1
5 2 
Sample Output 2 :
15
120
*/

//Code
#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
    if(q==1){
        return n*(n+1)/2;
    }
    if(q==2){
        long mod=(long)1e9+7;
        long ans=1;
        for(int i=2;i<=n;i++){
            i=i%mod;
            ans=ans%mod;
            ans=(((ans*i)%mod)+mod)%mod;
        }
        return ans;
    }
}
