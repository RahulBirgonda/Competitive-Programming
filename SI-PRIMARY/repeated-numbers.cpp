Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-repeated-numbers
/*
You are given an array of N elements. All elements of the array are in range 1 to N-2. All elements occur once except two numbers, which occur twice. Your task is to find the two repeating numbers.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array and second line contains the elements of the array.

Constraints

30 points
1 <= T <= 100
4 <= N <= 103

70 points
1 <= T <= 100
4 <= N <= 106

Output Format

Print the 2 repeated numbers in sorted manner, for each test case, separated by new line.

Sample Input 0

2
8
1 3 2 3 4 6 5 5 
10
1 5 2 8 1 4 7 4 3 6 
Sample Output 0

3 5
1 4
*/
#include <bits/stdc++.h>
using namespace std;


void tworepeats(int arr[],int n){
    int ans=0,pos=0,n1=0;
    for(int i=1;i<=n-2;i++) ans=ans^i;
    for(int i=0;i<n;i++) ans=ans^arr[i];
    int temp=ans;
    while((ans&1)==0){
        ans=ans>>1;
        pos++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]&(1<<pos)) n1 ^= arr[i];
    }        
   for(int i=1;i<=n-2;i++){
        if(i&(1<<pos)) n1 ^= i;
    }
    cout<<min(n1,temp^n1)<<" "<<max(n1,temp^n1)<<endl;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            tworepeats(arr,n);
        }
    
    return 0;
}
