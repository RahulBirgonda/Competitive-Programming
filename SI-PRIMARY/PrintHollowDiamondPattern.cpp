Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-print-hollow-diamond-pattern
/*
Print hollow diamond pattern using '*'. See examples for more details.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single odd integer N - the size of the diamond.

Constraints

1 <= T <= 100
3 <= N <= 201

Output Format

For each test case, print the test case number as shown, followed by the diamond pattern, separated by newline.

Sample Input 0

4
3
7
5
15
Sample Output 0

Case #1:
 *
* *
 *
Case #2:
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Case #3:
  *
 * *
*   *
 * *
  *
Case #4:
       *
      * *
     *   *
    *     *
   *       *
  *         *
 *           *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *
   */
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,t,cas;
    cin>>t;
    cas=0;
    while(t--){
    cin>>n;
    n=n/2+1;
    cas++;
    cout<<"Case #"<<cas<<":"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++)  cout<<" ";
     
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==(2*i-1)) cout<<"*";
            else cout<<" ";
            }
            cout<<endl;
        }
        
    for(int i=n-1; i>=1; i--){
        for(int j=n; j>i; j--) cout<<" ";
        
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1) cout<<"*";
            else cout<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}
