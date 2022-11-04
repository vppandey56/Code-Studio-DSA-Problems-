/*
Sample Input 1:
2
A
3 4 6
T
7 3 8
Sample Output 1:
A 4
T 6
Explanation For Sample Input 1:
For sample case 1, average marks of the student are (3 + 4 + 6)/3 = 4.33 and his/her first character of the name is ‘A’. Therefore, the output is : A 4
For sample case 2, average marks of the student are (7 + 3 + 8)/3 = 6 and his/her first character of the name is ‘T’. Therefore, the output is : T 6
Sample Input 2:
2
Q
10 34 96
P
71 80 3
Sample Output 2:
Q 46
P 51
Explanation For Sample Input 2:
For sample case 1, average marks of the student are (10 + 34 + 96)/3 = 46.67 and his/her first character of the name is ‘Q’. Therefore, the output is : Q 46
For sample case 2, average marks of the student are (71 + 80 + 3)/3 = 51.33 and his/her first character of the name is ‘P’. Therefore, the output is : P 51

*/

//code

#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    pair<char, int> ans;
    ans.first=firstLetterOfName;
    int total=m1+m2+m3;
    int avg=total/3;
    ans.second=avg;
    return ans;
}
