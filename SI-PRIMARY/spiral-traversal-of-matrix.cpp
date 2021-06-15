Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-spiral-traversal-of-matrix

/*
Given a 2D square matrix, print the matrix in a spiral order. Refer examples for more details. From interviews point of view, after you scan the matrix in a 2D array, try to print the matrix in a spiral order without using any extra space.


Input Format

First line of input contains T - number of test cases. First line of each test case contains N - size of the matrix [NxN]. Its followed by N lines each containing N integers - elements of the matrix.

Constraints

1 <= T <= 100
1 <= N <= 100
-100 <= ar[i][j] <= 100

Output Format

For each test case, print the matrix in a spiral order, separated by newline.

Sample Input 0

4
1
1
2
1 2
4 3
3
1 2 3
8 9 4
7 6 5
5
-44 25 -52 69 -5 
17 22 51 27 -44 
-79 28 -78 1 -47 
65 -77 -14 -21 -6 
-96 43 -21 -20 90 
Sample Output 0

1 
1 2 3 4 
1 2 3 4 5 6 7 8 9 
-44 25 -52 69 -5 -44 -47 -6 90 -20 -21 43 -96 65 -79 17 22 51 27 1 -21 -14 -77 28 -78 

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        signed int matrix[n][n];
        for(int i=0;i<n;i++) {
           for(int j=0;j<n;j++) cin>>matrix[i][j];
        }
        
        int top=0,left=0,bottom=n-1,right=n-1,dir=0;
        
        
        while(top<=bottom and left<=right){
            //printing left to right
            if(dir==0){
                for(int i=left;i<=right;i++){
                    cout<<matrix[top][i]<<" ";
                }
                top++;
            }
            //printing top to bottom
            else if(dir==1){
                for(int i=top;i<=bottom;i++){
                    cout<<matrix[i][right]<<" ";
                }
                right--;
            }
            //printing  right to left
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    cout<<matrix[bottom][i]<<" ";
                }
                bottom--;
            }
            else if(dir==3){
                for(int i=bottom;i>=top;i--){
                    cout<<matrix[i][left]<<" ";
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        cout<<endl;
        
    }
    return 0;
}
