Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-count-the-triangles
/*
Given 2 strings A and B, find the smallest substring of B having all the characters of A, in any order.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 space separated strings - A and B.

Constraints

20 points
1 <= T <= 100
1 <= size(A), size(B) <= 100

60 points
1 <= T <= 100
1 <= size(A), size(B) <= 1000

120 points
1 <= T <= 100
1 <= size(A), size(B) <= 10000

General Constraints
'a' <= A[i],B[i] <= 'z'

Output Format

For each test case, print the length of the smallest substring of B having all the characters of A, separated by newline. If no such substring found, print -1.

Sample Input 0

4
fkqyu frqkzkruqmfqyuzlkyg
onmwvytbytn uqhmfjaqtgngcwkuzyamnerphfmw
bloets lwbcrsfothplxseplrtbshbtstjloxsf
dzpd dclzztpjldkndgbdqqzmbp
Sample Output 0

7
-1
13
9
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt = 0;
        for(int i=n-1;i>1;i--){
            int l = 0;
            int r = i-1;
            while(l<r){
                if(a[l]+a[r]>a[i]){
                    cnt += (r-l);
                    r--;
                }
                else{
                    l++;
                }
            
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
