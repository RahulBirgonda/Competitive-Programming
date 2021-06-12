https://www.hackerrank.com/contests/smart-interviews/challenges/si-cabinets-partitioning/problem

/*
You are given a job which has been divide into N tasks. The task cannot be divided any further. Each of the N tasks takes Si number of seconds to complete. Your job will be completed when all your tasks are completed. You have K workers at your disposal to help you complete the tasks. But as per the nature of the job, a worker can only be allocated continuous tasks. A worker can work only on a single task at any given point of time. However, the workers can work in parallel on different tasks. You have to find the minimum possible time in which you can complete the job.


Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N and K - number of tasks and available workers for the current job, separated by space. The next line contains N positive integers - denoting the time taken to complete the ith task.


Constraints

50 points
1 <= N,K <= 20

150 points
1 <= N,K <= 10000

General Constraints
1 <= T <= 50
1 <= Si <= 103

Output Format

For each test case, print the minimum possible time in which you can complete the job, separated by newline.


Sample Input 0

6
10 3
1 10 13 4 5 12 23 12 18 8 
8 4
17 27 22 45 26 32 45 16 
2 2
74 61 
7 3
74 24 61 81 66 76 51 
2 1
54 10 
4 2
15 30 10 50 
Sample Output 0

38
66
74
159
64
55
*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define int long long
using namespace std;

bool is_possible(int times[],int k,int allowed_value,int n){
    int num_workers = 1;
    int allocated = 0;
    for(int i=0;i<n;i++){
        if(allocated+times[i]>allowed_value){
            num_workers++;
            allocated = times[i];
            if(num_workers>k){
                return false;
            }
        }
        else{
            allocated += times[i];
            
        }
    }
    return true;
}

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int times[n];
        int max_time = INT_MIN;
        int csum = 0;
        for(int i=0;i<n;i++){
            cin>>times[i];
            csum += times[i];
            max_time = max(max_time,times[i]);
        }
        
        int s = max_time;
        int e = csum;
        int mid;
        int ans = csum;
        while(s<=e){
            mid = (s+e)/2;
            if(is_possible(times,k,mid,n)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
