Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-find-first-repeating-character
/*
Given a string of characters, find the first repeating character.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single string of characters.

Constraints

1 <= T <= 1000
'a' <= str[i] <= 'z'
1 <= len(str) <= 104

Output Format

For each test case, print the first repeating character, separated by newline. If there are none, print '.'.

Sample Input 0

3
smartinterviews
algorithms
datastructures
Sample Output 0

s
.
a
*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }
        char ans='.';
        for(int i=0;i<n;i++){
            if(mp[str[i]]>1){
                ans=str[i];
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
