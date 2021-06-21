Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-subsequence-sum
/*
Given a sequence of N numbers: S1, ..., SN, determine how many subsequences of S have a sum between A and B inclusive.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, first line contains - N, A, B separated by space. The next line contains the sequence of N numbers.

Constraints

50 points
1 <= T <= 100
1 <= N <= 15

150 points
1 <= T <= 100
1 <= N <= 30

General Constraints
-107 <= A <= B <= 107
-107 <= S[i] <= 107

Output Format

For each test case, print the result, separated by newline.

Sample Input 0

2
3 -1 2
1 -2 3
5 5 15
1 4 -3 6 4
Sample Output 0

5
20
*/
#include <bits/stdc++.h>
using namespace std;
int cnt;
void Sub(int arr[],int idx,int subarr,int subsum,int l,vector<int>& res,int A,int B){
    if(idx>=l){
        if(subarr){
            res.push_back(subsum);
            if(subsum>=A && subsum<=B) cnt++;
        }
        return;
    }
    Sub(arr,idx+1,subarr+1,subsum+arr[idx],l,res,A,B);
    Sub(arr,idx+1,subarr,subsum,l,res,A,B);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n,A,B;
        cin>>n>>A>>B;
         
        int n1=n/2;
        int n2=n-n1;
        int a1[n1],a2[n2];
        
        for(int i=0;i<n1;i++)   cin>>a1[i];
        
        for(int i=0;i<n2;i++)   cin>>a2[i];
        
        int ans=0;
        vector<int> res1,res2;
        
        cnt=0;
        Sub(a1,0,0,0,n1,res1,A,B);
        ans+=cnt;
        
        cnt=0;
        Sub(a2,0,0,0,n2,res2,A,B);
        ans+=cnt;
        
        sort(res2.begin(), res2.end());

        for (int i = 0; i < res1.size();i++) {
            auto low = lower_bound(res2.begin(),res2.end(), A - res1[i]);
            auto high = upper_bound(res2.begin(), res2.end(), B - res1[i]);
            ans += (high - low);
        }
        
        if(A<=0 and B>=0) ans+=1;
        cout<<ans<<"\n";

    }
    return 0;
}

