/*
Sample Input 1 :
5
Sample Output 1 :
120
Explanation Of Sample Input 1:
5!=5*4*3*2*1=120
Sample Input 2 :
0
Sample Output 2 :
1
Explanation Of Sample Input 2:
Its a fact that 0!=1
Sample Input 3 :
-2
Sample Output 3 :
Error
Explanation Of Sample Input 3:
It's a fact that we can't find the factorial of a negative number.
*/

//Code

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) 
        return 1;
    int partialAns = factorial(n-1);
    return n*partialAns;
    
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    if(n<0)
        cout<<"Error";
    
    else
        cout<<factorial(n);
    
    return 0;
}
