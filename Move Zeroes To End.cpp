/*
Sample Input 1:
2
7
2 0 4 1 3 0 28
5
0 0 0 0 1
Sample Output 1:
2 4 1 3 28 0 0
1 0 0 0 0
The Explanation For Sample Output 1 :
In the first testcase, All the zeros are moved towards the end of the array, and the non-zero elements are pushed towards the left, maintaining their order with respect to the original array.

In the second testcase, All zero are moved towards the end, hence the only non-zero element i.e 1 is in the starting of the array 
Sample Input 2:
2
5
0 3 0 2 0
4
0 0 0 0
Sample Output 2:
3 2 0 0 0
0 0 0 0


*/

//code

void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
    int zeroptr=-1;
    int nonzeroptr=-1;
    int n=arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeroptr=i;
            break;
        }
    }
    if(zeroptr==-1){
        return;
    }
    
    for(int i=zeroptr+1; i<n; i++){
        if(arr[i] != 0){
            nonzeroptr=i;
            break;
        }
    }
    if(nonzeroptr==-1){
        return;
    }
    while(nonzeroptr<n){
        int tmp=arr[zeroptr];
        arr[zeroptr]=arr[nonzeroptr];
        arr[nonzeroptr]=tmp;
        
        zeroptr++;
        while(nonzeroptr<n && arr[nonzeroptr]==0){
            nonzeroptr++;
        }
    }
}
