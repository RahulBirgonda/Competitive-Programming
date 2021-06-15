Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-triplet-with-sum-k
/*
You are given an integer array and a number K. You have to tell if there exists i,j,k in the given array such that ar[i]+ar[j]+ar[k]=K, i≠j≠k.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N and K - the size of the array and the number K. The second line contains the elements of the array.

Constraints

30 points
1 <= T <= 100
3 <= N <= 100

70 points
1 <= T <= 100
3 <= N <= 1000

General
-100000 <= A[i] <= 100000
0 <= K <= 100000

Output Format

For each test case, print "true" if the arrays contains such elements, false otherwise, separated by new line.

Sample Input 0

3
5 60
1 20 40 100 80 
12 54
12 45 52 65 21 645 234 -100 14 575 -80 112 
3 15
5 5 5
Sample Output 0

false
true
true
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(int a[],int p1,int p2,int k){
    while(p1<p2){
        if(a[p1]+a[p2]==k)  return 1;
        else if(a[p1]+a[p2]>k) p2--;
        else    p1++;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int is_exist=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            is_exist= is_exist || check(arr,i+1,n-1,k-arr[i]);
        }
        if(is_exist)    cout<<"true"<<endl;
       else cout<<"false"<<endl;
    }
    return 0;
}
