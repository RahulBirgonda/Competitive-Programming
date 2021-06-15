Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-largest-concatenated-number
/*
Problem
Submissions
Leaderboard
Given an array of integers, find the largest number that can be constructed by concatenating all the elements of the given array.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array and the second line contains N integers - elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 1000
0 <= ar[i] <= 1000

Output Format

For each test case, print the largest number that can be constructed by concatenating all the elements of the given array, separated by newline.

Sample Input 0

3
8
49 73 58 30 72 44 78 23 
4
69 9 57 60 
2
40 4 
Sample Output 0

7873725849443023
9696057
440
*/
#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    string s1 = to_string(a)+to_string(b);
    string s2 = to_string(b)+to_string(a);
    return s1>s2;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n,compare);
        string ans = "";
        for(int i=0;i<n;i++){
            ans += to_string(arr[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}

