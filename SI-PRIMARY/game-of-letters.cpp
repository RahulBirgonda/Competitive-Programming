Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-game-of-letters
/*
Santa and Banta are playing a game of letters.

The rules are as follows:
1. Initially they have a string consisting of lowercase english alphabets only.
2. Each of them take turn.
3. In each turn, a player removes some alphabets from the string (at least one). All the alphabets removed by a player in a turn must be the same. To understand it better, say a player in his turn removes 3 characters. Now all the 3 removed characters must be same, so all 3 must be either 'a' or 'b' or 'c' or...
4. The player who is unable to make a move loses the game.

You are given the string. Assume Santa always plays the first move, you have to print the name of the winner.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single string of lower-case english alphabets.

Constraints

1 <= T <= 1000
1 <= len(S) <= 104
'a' <= S[i] <= 'z'

Output Format

For each test case, print the name of the winner, separated by newline.

Sample Input 0

3
aaa
abab
abacd
Sample Output 0

Santa
Banta
Santa
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        unordered_map<char,int> map;
        
        for(int i=0;i<n;i++)    map[s[i]]++;
        
        int ans=0;
        for(auto i: map)    ans=ans^(i.second);
        
        if(ans) cout<<"Santa"<<endl;
        else cout<<"Banta"<<endl;
    }
    return 0;
}
