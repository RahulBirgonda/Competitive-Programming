Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-print-right-angled-triangle-pattern
/*
Print mirror image of right-angled triangle using '*'. See examples for more details.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single integer N - the size of the pattern.

Constraints

1 <= T <= 100
1 <= N <= 100

Output Format

For each test case, print the test case number as shown, followed by the pattern, separated by newline.

Sample Input 0

4
2
1
5
10
Sample Output 0

Case #1:
 *
**
Case #2:
*
Case #3:
    *
   **
  ***
 ****
*****
Case #4:
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;cin>>t;
    int n;
    int cs=0;
    while(t--){
    cin>>n;
    cout<<"Case #"<<++cs<<":"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
        
    }
    
}
    
    return 0;
}
