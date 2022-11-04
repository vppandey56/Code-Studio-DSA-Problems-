/*
Sample Input 1 :
2
5
5 4 3 2 1
0 0 0 0 0
6
5 3 2 6 1 4
0 1 2 0 3 2
Sample Output 1 :
1 2 3 4 5
5 3 2 1 6 4
Explanation Of Sample Input 1 :
Test case 1:
There is no person in front of any person who is taller than him, Thus all of them must be present in the queue in increasing order of their height.

Test case 2:
See the problem statement for an explanation.
Sample Input 2 :
2
2
2 3
1 0
5
1 2 3 4 5
4 3 2 1 0
Sample Output 2 :
3 2
5 4 3 2 1


*/

//code

#include<algorithm>
//#include<runner.h>
vector<int> findOrder(vector<int> & height, vector<int> & infront) {
	// Write your code here.
    int n=height.size();
    
    vector<vector<int>> v(n,vector<int>(2,0));
    for(int i=0; i<n; i++){
        v[i][0]=height[i];
        v[i][1]=infront[i];
    }
    
    sort(v.begin(),v.end());
     vector<int> res(n,-1);
    for(int person=0;person<n;person++){
        int pos=0;
        
        for(int j=0; j<n;j++){
            if(res[j]==-1 and pos<v[person][1]){
                pos++;
            }
            else if (res[j]==-1 and pos==v[person][1]){
                res[j]=v[person][0];
                break;
            }
        }
    }
    return res;
}
