Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-check-anagrams
/*
Given 2 strings, check if they are anagrams. An anagram is a rearrangement of the letters of one word to form another word. In other words, some permutation of string A must be same as string B.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 space separated strings.

Constraints

10 points
1 <= T <= 100
1 <= len(S) <= 103
'a' <= S[i] <= 'z'

40 points
1 <= T <= 100
1 <= len(S) <= 105
'a' <= S[i] <= 'z'

Output Format

For each test case, print True/False, separated by newline.

Sample Input 0

4
a a
b h
stop post
hi hey
Sample Output 0

True
False
True
False
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


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
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}
