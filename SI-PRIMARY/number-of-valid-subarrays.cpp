Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-number-of-valid-subarrays
/*
You are given a array containing only 0s and 1s . You have to tell the number of subarrays which has equal number of 0s and 1s.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines - the first line contains N - the size of the array. The second line contains the elements of the array.

Constraints

40 points
1 <= T <= 100
1 <= N <= 100

60 points
1 <= T <= 100
1 <= N <= 1000

100 points
1 <= T <= 100
1 <= N <= 50000

Output Format

For each test case, output the number of subarrays having equal numer of 0s and 1s, separated by new line.

Sample Input 0

3
4
1 0 1 0 
10
1 0 1 0 0 1 0 0 1 1 
4
1 1 1 1 
Sample Output 0

4
14
0
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        a[0] = 0;
        
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==0) a[i] = -1;     
        }
        
        for(int i=1;i<=n;i++) a[i] = a[i-1]+a[i];
 
        unordered_map<int,int> mp;
        for(int i=0;i<=n;i++)   mp[a[i]]++;

        int ans = 0;
        for(auto it: mp){
            int t = it.second;
            ans = ans + ((t)*(t-1)/2);
        }
        cout<<ans<<endl;
    }
}
