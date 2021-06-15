Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-compute-factorial
/*
Given a number N, print N!.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each containing a single number N.

Constraints

1 <= T <= 1000000
0 <= N <= 1000000

Output Format

For each test case, print N!. Since the result can be very large, print N! % 1e9+7.

Sample Input 0

3
5
20
50
Sample Output 0

120
146326063
318608048
*/
#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
#define int long long


int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> fac(1000000,0);
    fac[0]=1;
    for(int i=1;i<=1000000;i++){
        fac[i]=(i*fac[i-1])%m;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fac[n]<<"\n";
    }

    
    return 0;
}
