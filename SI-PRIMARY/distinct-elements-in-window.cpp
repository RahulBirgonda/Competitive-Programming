Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-distinct-elements-in-window
/*
Given an array of integers and a window size K, find the number of distinct elements in every window of size K of the given array.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array and K - size of the window. The second line contains N integers - elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 10000
1 <= K <= N
-100 <= ar[i] <= 100

Output Format

For each test case, print the number of distinct elements in every window of size K, separated by newline.

Sample Input 0

3
5 3
-2 -4 -2 4 -2 
10 7
3 -4 -3 -4 -2 0 2 -2 6 0 
17 13
-5 -1 4 8 -5 -3 -4 7 4 -4 0 8 0 -2 3 2 5 
Sample Output 0

2 3 2 
6 5 6 5 
8 9 9 10 11 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;cin>>t;
    map<int,int> mp;
    while(t--){
        mp.clear();
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        for(int j=0;j<k;j++){
            mp[a[j]]++;
        }
        
        int p2=k-1;
        cout<<mp.size()<<" ";
        
        for(int i=1;i<n-k+1;i++){
            p2++;
            mp[a[p2]]++;
            
            mp[a[i-1]]--;
            if(mp[a[i-1]]==0){
                mp.erase(a[i-1]);
            }
            cout<<mp.size()<<" ";
            
            
        }
        cout<<endl;
        
        
    }
    return 0;
}
