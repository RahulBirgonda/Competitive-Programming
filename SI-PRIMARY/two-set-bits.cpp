Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-two-set-bits
/*
Look at the following sequence:
3, 5, 6, 9, 10, 12, 17, 18, 20....

All the numbers in the series has exactly 2 bits set in their binary representation. Your task is simple, you have to find the Nth number of this sequence.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each containing a single number N.

Constraints

20 points
1 <= T, N <= 200

60 points
1 <= T, N <= 105

120 points
1 <= T <= 105
1 <= N <= 1014

Output Format

For each test case, print the Nth number of the sequence, separated by newline. Since the number can be very large, print number % 1000000007.

Sample Input 0

5
1
2
5
50
100
Sample Output 0

3
5
10
1040
16640
*/
#include <bits/stdc++.h>
#define int long long
#define m 1000000007
using namespace std;

int power(int a,int b){
    int ans=1;
    int x=a;
    for(int i=0;i<log2(b)+1;i++){
        if(b&(1<<i)) ans=(ans*x)%m;
        x=(x*x)%m;
    }
    return ans%m;
}

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
    int N;
    cin>>N;
    int bit_L = 1, last_num = 0;
    while((bit_L%m * (bit_L%m + 1) %m)%m < 2*(N%m)){
        last_num = (last_num%m + bit_L%m)%m;
        bit_L++;
    }
 
    int bit_R = N - last_num - 1;
 
    cout << power(2,bit_L)+ power(2,bit_R)
         << endl;
    }
    
    return 0;
}
