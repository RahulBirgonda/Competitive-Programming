Link:
https://www.hackerrank.com/contests/smart-interviews/challenges/si-prime-fear
/*
Ross and Rachael are afraid of prime numbers, but they are not afraid of all prime numbers. They were afraid of only a special kind of prime numbers. They are afraid of the prime numbers (without the digit zero, they love all the primes which have digits 0 in them) that remain prime no matter how many of the leading digits are omitted. For example, they are afraid of 4632647 because it doesn't have the digit 0 and each of its truncations (632647, 32647, 2647, 647, 47, and 7) are primes.
You are given a simple task, given a number of N, find out the number of primes not greater that N, that Ross and Rachael are afraid of.
Input Format
First line of input contains T - number of test cases. Its followed by T lines, each line containing as single number - N.
Constraints
40 points
1 <= T <= 103
1 <= N <= 103
60 points
1 <= T <= 104
1 <= N <= 104
100 points
1 <= T <= 106
1 <= N <= 106
Output Format
For each test case, print the number of primes not greater that N, that Ross and Rachael are afraid of, separated by new line.
Sample Input 0
3
5
100
30
Sample Output 0
3
15
7
*/
#include <bits/stdc++.h>
using namespace std;
#define m 1000000007

const int size = 1000000+1;
int Prime[size];
int cnt[size];

int power(int a,int b){
    int ans=1;
    int x=a;
    
    for(int i=0;i<log2(b)+1;i++){
        if(b&(1<<i)) ans=(ans*x)%m;
        x=(x*x)%m;
    }
    
    return ans%m;
}

int fear(int num){
    int dig = 0;
    int temp = num;
    
    while(num > 0){
        if(num%10 == 0)
            return 0;
        dig++;
        num /= 10;
    }
    
    int div = power(10, dig-1);
    num = temp;
    
    while(num > 0){
        num %= div;
        div /= 10;
        if((num != 0 && Prime[num] == 0))
            return 0;
    }
    
    return 1;
}



int main(){
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    Prime[0] = Prime[1] = 0;
    
    for(int i = 2;i <= 1000000; i++) Prime[i]=1;
    
    for(int i = 2;i <= sqrt(1000000); i++){
        if(Prime[i] == 1){
            for(int j = i*i;j <= 1000000; j += i)   Prime[j] = 0;
        }
    }
    
    for(int i = 2;i <= 1000000; i++){
        cnt[i] = cnt[i-1];
        if(Prime[i] == 1){
            if(fear(i)) cnt[i]++;
        }
    }
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << cnt[n] << endl;
    }
    return 0;
}
