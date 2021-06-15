Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-sum-of-subarrays

/*
Given an array of integers, answer queries of the form: [i, j] : Print the sum of array elements from A[i] to A[j], both inclusive.

Input Format

First line of input contains N - size of the array. The next line contains N integers - elements of the array. The next line contains Q - number of queries. Each of the next Q lines contains 2 space separated indexes: i and j.

Constraints

30 points
1 <= N,Q <= 10000

70 points
1 <= N,Q <= 500000

General Constraints
-109 <= A[i] <= 109
0 <= i <= j <= N-1

Output Format

For each query, print the sum of array elements from A[i] to A[j], both inclusive, separated by newline.

Sample Input 0

10
1 30 13 -4 -5 12 -53 -12 43 100 
4
0 5
1 7
2 3
7 9
Sample Output 0

47
-19
9
131
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum[n+1];
    sum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>sum[i];
        sum[i]=sum[i]+sum[i-1]; 
    }    
    //for(int i=0;i<=n;i++) cout<<sum[i]<<" ";cout<<endl;
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<sum[b+1]-sum[a]<<"\n";
        
    }
    return 0;
}
