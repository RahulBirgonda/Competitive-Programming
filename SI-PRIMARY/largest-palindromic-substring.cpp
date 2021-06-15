Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-largest-palindromic-substring

/*
Given a string, find the length of the largest palindromic substring.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. The first line contains N - the size of the string and the second line contains a string of size N, containing only lowercase english alphabets.

Constraints

30 points
1 <= T <= 200
1 <= len(S) <= 102
'a' <= S[i] <= 'z'

70 points
1 <= T <= 200
1 <= len(S) <= 103
'a' <= S[i] <= 'z'

Output Format

For each test case, print the length of the largest palindromic substring, separated by newline.

Sample Input 0

5
8
pfyafafd
9
sllwffoqq
6
yoogvb
4
hcch
23
mzmqnnrkurfmmfrukrnnqsm
Sample Output 0

3
2
2
4
18
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int lps = 0;
        
        for(int i=0;i<n;i++){
            int p1 = i-1;
            int p2 = i+1;
            while(p1>=0 && p2<=n-1 && str[p1]==str[p2]){
                p1--;
                p2++;
            }
            if((p2-p1-1)>lps) lps=p2-p1-1;
        }

        for(int i=0;i<n;i++){
            int p1 = i;
            int p2 = i+1;
            while(p1>=0 && p2<=n-1 && str[p1]==str[p2]){
                p1--;
                p2++;
            }
            
            if((p2-p1-1)>lps) lps=p2-p1-1;
        }

        cout<<lps<<endl;

    }
}
