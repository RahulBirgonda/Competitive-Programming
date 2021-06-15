Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-finding-cuberoot
/*
Find the cube root of the given number. Assume that all the input test cases will be a perfect cube.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each containing a single integer.

Constraints

30 points
1 <= T <= 103
-109 <= N <= 109

70 points
1 <= T <= 106
-1018 <= N <= 1018

Output Format

For each test case, print the cube root of the number, separated by newline.

Sample Input 0

5
-27
-125
1000
6859
-19683
Sample Output 0

-3
-5
10
19
-27
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    map<int,int> mp;
    for(int i=0;i<=1000000;i++){
        mp[i*i*i] = i;
    }    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<0) cout<<-mp[abs(n)]<<endl;
        else    cout<<mp[n]<<endl;
    }
    return 0;
}
