Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-compute-a-power-b

/*
Given 2 numbers - a and b, evaluate ab.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 numbers - a and b, separated by space.

Constraints

30 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 103

70 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 109

Output Format

For each test case, print ab, separated by new line. Since the result can be very large, print result % 1000000007

Sample Input 0

4
5 2
1 10
2 30
10 10
Sample Output 0

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007


int power(int a,int b){
    int ans=1;
    int x=a;
    for(int i=0;i<log2(b)+1;i++){
        if(b&(1<<i)) ans=(ans*x)%m;
        x=(x*x)%m;
    }
    return ans%m;
}


int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}
