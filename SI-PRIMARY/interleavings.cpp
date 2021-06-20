Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-interleavings
/*
Given 2 strings A and B, print all the interleavings of the 2 strings. An interleaved string of given two strings preserves the order of characters in individual strings and uses all the characters of both the strings. For simplicity, you can assume that the strings have unique characters.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each contains 2 space separated strings A and B.

Constraints

1 <= T <= 100
'a' <= A[i], B[i] <= 'z'
1 <= len(A), len(B) <= 10

Output Format

For each test case, print the test case number, followed by the interleavings of the 2 strings in a sorted order, separated by newline.

Sample Input 0

2
nkb gl
bn zh
Sample Output 0

Case #1:
glnkb
gnkbl
gnklb
gnlkb
ngkbl
ngklb
nglkb
nkbgl
nkgbl
nkglb
Case #2:
bnzh
bzhn
bznh
zbhn
zbnh
zhbn
*/
#include <bits/stdc++.h>
using namespace std;
set<string> res;

void interleave(string s1,string s2,string s,int idx1,int idx2,int curr,int n){
    
    if(curr==n){
        res.insert(s);
        return;
    }
    
    if(idx1<s1.length())  interleave(s1,s2,s+s1[idx1],idx1+1,idx2,curr+1,n);
    
    if(idx2<s2.length())  interleave(s1,s2,s+s2[idx2],idx1,idx2+1,curr+1,n);
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    int i=1;
    while(t--){
        cout<<"Case #"<<i<<":"<<endl;
        res.clear();
        string s1,s2;
        cin>>s1>>s2;
        
        if(s1>s2)   swap(s1,s2);
        
        int n = s1.length()+s2.length();
        interleave(s1,s2,"",0,0,0,n);
        
        for(auto ans:res){
            cout<<ans<<endl;
        }
        i++;
    }
    return 0;
}
