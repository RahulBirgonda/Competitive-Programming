Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-subset-sum
/*
Given a set of non-negative integers, and a value S, determine if there is a subset of the given set with sum equal to S.

Input Format

First line of the input contains T - the number of test cases. Its followed by 2T lines - the first line of each test case contains N - number of elements in given array and S - the required sum. The second line contains elements of the array.

Constraints

20 points
1 <= N <= 10
0 <= S <= 100

80 points
1 <= N <= 100
0 <= S <= 1000

General Constraints
1 <= T <= 100
0 <= A[i] <= 103

Output Format

For each test case, print "YES" if there is a subset of the given set with sum equal to given S, otherwise "NO", separated by newline .

Sample Input 0

2
5 15
10 4 5 9 1 
5 17
13 11 19 20 21 
Sample Output 0

YES
NO
Explanation 0

Test Case 1
15 = 9 + 5 + 1
Test Case 2
No such subset exists.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sum;
        cin>>n>>sum;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++)   dp[i][j]=false;
            
        }
        for(int i=0;i<=n;i++) dp[i][0]=true;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(a[i-1]<=j) dp[i][j]= dp[i-1][j] || dp[i-1][j-a[i-1]];
                else dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][sum]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
        
           
