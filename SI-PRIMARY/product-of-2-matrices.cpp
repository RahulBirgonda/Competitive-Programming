Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-product-of-2-matrices
/*
Given 2 matrices, find the product.

Input Format

First line of input contains T - number of test cases. First line of each test case contains N1, M1 - size of the 1st matrix. Its followed by N1 lines each containing M1 intergers - elements of the 1st matrix. The next line contains N2, M2 - size of the 2nd matrix. Its followed by N2 lines each containing M2 intergers - elements of the 2nd matrix. Note that M1 = N2.

Constraints

1 <= T <= 100
1 <= N1,M1,N2,M2 <= 50
-100 <= mat[i][j] <= 100

Output Format

For each test case, print the resultant product matrix, separated by newline.

Sample Input 0

2
2 2
1 2 
3 -1 
2 3
1 -2 3 
2 3 -1 
2 3
27 29 53 
-28 49 -24 
3 4
23 52 -38 72 
-64 15 -59 -10 
-75 43 10 25 
Sample Output 0

5 4 1 
1 -9 10 
-5210 4118 -2207 2979 
-1980 -1753 -2067 -3106 

*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int row1,col1,row2,col2;
        cin>>row1>>col1;
        int a[row1][col1];
        
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                cin>>a[i][j];
            }
        }
        cin>>row2>>col2;
        int b[row2][col2];
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cin>>b[i][j];
            }
        }
        
        int pro[row1][col2];
        memset(pro,0,sizeof pro);
        
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                for(int k=0;k<col1;k++){
                    pro[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
               cout<<pro[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
        
    }
    return 0;
}
