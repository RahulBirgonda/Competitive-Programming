Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-maximum-contiguous-subsequence
/*
Given an array, find the length of the longest subsequence whose elements can be re-arranged in a strictly increasing contiguous order. The difference between 2 adjacent elements in the subsequence, after re-arrangement, should be exactly 1.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array. The next line contains N integers - the elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 10000
-100000 <= ar[i] <= 100000

Output Format

For each test case, print the length of the longest subsequence, separated by newline.

Sample Input 0

3
8
21 -22 -22 5 -31 -24 5 -23 
10
18 -33 31 33 30 -14 32 30 16 17 
6
6 3 8 5 2 5 
Sample Output 0

3
4
2
Explanation 0

Test Case 1
Subsequence is: -22, -24, -23.

Test Case 2
Subsequence is: 31, 33, 30, 32.

Test Case 3
Subsequence is: 6, 5 or 3, 2.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    cin>>a[i];
        sort(a,a+n);
        map<int,int> mp;
        for(int i=0;i<n;i++)    mp[a[i]] = 1;

        int A[mp.size()];
        int i=0;
        for(auto it:mp) A[i++] = it.first;
        
        int ans = 0;
        int cnt=1;
        for(int i=1;i<mp.size();i++){
            if(A[i]==1+A[i-1])  cnt += 1;
            else    cnt = 1;
            ans = max(ans,cnt);
        }
        ans = max(ans,cnt);
        cout<<ans<<endl;
    }
    return 0;
}
