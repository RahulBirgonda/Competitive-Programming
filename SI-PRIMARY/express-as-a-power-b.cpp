Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-express-as-a-power-b
/*
Given a number, check if the number can be expressed as pow(a, b) where both a and b should be greater than 1.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single integer N.

Constraints

30 points
1 <= T <= 104
1 <= N <= 106

70 points
1 <= T <= 106
1 <= N <= 108

Output Format

For each test case, print "Yes" if N can be expressed as pow(a, b), print "No" otherwise, separated by newline.

Sample Input 0

5
2
16
31
8880
961
Sample Output 0

No
Yes
No
No
Yes
*/
#include<bits/stdc++.h>
#define ll long long
#define maxi int(1e8)

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_set<int>s;
    ll x=sqrt(maxi);
    for(ll i=2;i<=x;i++){
        if(s.find(i)==s.end()){
            ll k=i*i;
            while(k<=maxi){
                s.insert(k);
                k=k*i;
            }  
        }
    }
    int t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        if(s.find(n)!=s.end())  cout<<"Yes"<<"\n";
        else    cout<<"No"<<"\n";   
    }
    return 0;
}
