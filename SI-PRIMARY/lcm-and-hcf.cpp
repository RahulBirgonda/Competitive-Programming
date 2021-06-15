Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-lcm-and-hcf

/*
Given 2 numbers, find their LCM and HCF.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each contains 2 numbers A and B.

Constraints

1 <= T <= 105
1 <= A,B <= 109

Output Format

For each test case, print their LCM and HCF separated by space, separated by newline.

Sample Input 0

4
4 710
13 1
6 4
605904 996510762
Sample Output 0

1420 2
13 1
12 2
7740895599216 78
Explanation 0
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
  
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,ans1,ans2; cin>>a>>b;
    ans2=gcd(a, b);
    ans1=(a*b)/ans2;
        cout<<ans1<<" "<<ans2<<endl;
   
    }
     return 0;
}
