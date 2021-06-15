Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-trailing-zeros
/*
Count the number of trailing 0s in factorial of a given number.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each containing an integer N.

Constraints

1 <= T <= 10000
1 <= N <= 1015

Output Format

For each test case, print the number of trailing 0s in N!, separated by new line.

Sample Input 0

3
2
5
20
Sample Output 0

0
1
4
Explanation 0

2! = 2 [No trailing zeros]
5! = 120 [Trailing zeros=1]
20! = 2432902008176640000 [Trailing zeros=4]

*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long n,t;
    cin>>t;
    while(t--){
        cin>>n;
        long long ans=0;
        while(n){
            n=n/5;
           ans+=n;
        }
        cout<<ans<<endl;
    }
    return 0;
}
