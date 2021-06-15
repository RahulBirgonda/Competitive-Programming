LINK:  https://www.hackerrank.com/contests/smart-interviews/challenges/si-enclosing-substring
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
Explanation 0

Self Explanatory
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        string A,B;
        cin>>A>>B;
        int n=A.size(),m=B.size();
        
        unordered_map<char,int> map;
        for(int i=0;i<n;i++)    map[A[i]]++;
        
        int cnt=map.size();
        int i=0,j=0,minlen=INT_MAX;
        
        while(j<m){
            map[B[j]]--;
            if(map[B[j]]==0) cnt--;
            if(cnt==0){
                while(cnt==0){
                    if(minlen>j-i+1)    minlen=min(minlen,j-i+1);
                    
                    map[B[i]]++;
                    if(map[B[i]]>0) cnt++;
                    i++;
                }
            }
            j++;
        }
        
        if(minlen!=INT_MAX) cout<<minlen<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
