Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-smaller-elements
/*
You are given an array of integers. For each element in the array, find the number of smaller elements on the right side and print the total count.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array. The second line contains the elements of the array.

Constraints

1 <= T <= 100
1 <= N <= 100000
-10000 <= A[i] <= 10000

Output Format

For each test case, print the sum of count of smaller elements on right side of each element in the array, separated by new line.

Sample Input 0

2
5
4 10 54 11 8 
6
15 35 25 10 15 12 
Sample Output 0

4
10
Explanation 0

Test Case 1
Smaller Elements on right side of 4 : 0
Smaller Elements on right side of 10 : 1
Smaller Elements on right side of 54 : 2
Smaller Elements on right side of 11 : 1
Smaller Elements on right side of 8 : 0
Total Count = 0 + 1 + 2 + 1 + 0 = 4


Test Case 2
Smaller Elements on right side of 15 : 2
Smaller Elements on right side of 35 : 4
Smaller Elements on right side of 25 : 3
Smaller Elements on right side of 10 : 0
Smaller Elements on right side of 15 : 1
Smaller Elements on right side of 12 : 0
Total Count = 2 + 4 + 3 + 0 + 1 + 0 = 10
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

int ans = 0;

void Merge(int a[],int mid,int lo,int hi){
    int temp[hi-lo+1];
    int i=lo,j=mid+1;
    int k=0;
    while(i<=mid && j<=hi){
        if(a[i]<=a[j]) temp[k++]=a[i++];
        else{
            ans=ans+mid-i+1;
            temp[k++]=a[j++];
        }
    }
    while(i<=mid) temp[k++]=a[i++];
    while(j<=hi) temp[k++]=a[j++];
    for(int i=lo;i<=hi;i++) a[i] =temp[i-lo];
    
    
    
}

void Merge_Sort(int a[],int lo,int hi){
    if(lo<hi){
        int mid=(lo+hi)/2;
        Merge_Sort(a,lo,mid);
        Merge_Sort(a,mid+1,hi);
        Merge(a,mid,lo,hi);
    }
}

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        ans = 0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
    
        Merge_Sort(a,0,n-1);
        cout<<ans<<endl;
        
        
    }
    return 0;
}
