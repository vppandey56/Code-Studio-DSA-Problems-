/*
Sample Input 1:
4
2 5 -3 0
2
5
1
Sample Output 1:
1
-1
Explanation For Sample Input 1:
In the 1st test case, 5 is found at index 1

In the 2nd test case, 1 is not found in the array, hence return -1.
Sample Input 2:
5
100 -2 6 10 11
2
100
6
Sample Output 2:
0
2
*/

//Code

int search(int* arr, int n, int key) {
    // Write your code here.
    int pivot=-1;
    
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid+1]){
            pivot=mid;
            break;
        }
        else if(arr[mid]>=arr[start]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    if(pivot==-1){
        start=0;
        end=n-1;
    }
    
    else if(arr[0]>key){
        start=pivot+1;
        end=n-1;
    }
    else{
        start=0;
        end=pivot;
    }
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
