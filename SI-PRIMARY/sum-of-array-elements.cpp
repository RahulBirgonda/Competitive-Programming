Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-sum-of-array-elements
/*
Given an array of integers, find the sum of the elements of the given array.
Note: Try to solve this without declaring/storing the array elements.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= T <= 100
1 <= N <= 1000
1 <= ar[i] <= 1015

Output Format

For each test case, print the sum of the elements of the array, separated by new line.

Sample Input 0

2
3
5 15 3 
2
70 100 
Sample Output 0

23
170
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long long t;
    cin>>t;
    while(t>0){
        long long n;
        cin>>n;
        long long a[n];
        long long summ = 0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            summ = summ+a[i];
        }
        cout<<summ<<endl;
        t--;
        
    }
    return 0;
}
