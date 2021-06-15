Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-check-power-of-two

/*
Given a number, check if it is a power of 2.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing a single positive integer.

Constraints

1 <= T <= 10000
1 <= N <= 1018

Output Format

For each test case, print "True" or "False", separated by new line.

Sample Input 0

5
1
8
10
25
512
Sample Output 0

True
True
False
False
True
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define int long long
using namespace std;


int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans="False";
        if((ceil(log2(n)) == floor(log2(n))) && n) cout<<"True"<<endl;
        else cout<<ans<<endl;
    }
    
    return 0;
}
