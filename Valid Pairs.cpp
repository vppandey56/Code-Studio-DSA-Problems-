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

//Code

#include<unordered_map>
bool isValidPair(vector<int> &arr, int n, int k, int m)
{
    // Write your code here.
    if(n%2==1){
        return false;
    }
    
    unordered_map<int ,int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]%k]++;
    }
    for(auto it=freq.begin(); it!=freq.end();it++){
        int A=it->first;
        int x=(m-A+k)%k;
        if(freq[x]!=freq[A]){
            return false;
        }
    }
    return true;
}
