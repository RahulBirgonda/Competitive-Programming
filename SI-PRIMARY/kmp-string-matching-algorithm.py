Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-kmp-string-matching-algorithm

'''
Given an 2 strings A and B, find the number of occurrences of A in B as a substring. Solve using KMP string matching algorithm. Do not use inbuilt library.

Input Format

First line of input contains T - number of test cases. Its followed by T lines. Each line contains 2 strings - A and B, separated by space.

Constraints

1 <= T <= 2000
1 <= len(A), len(B) <= 10000
'a' <= A[i], B[i] <= 'z'

Output Format

For each test case, print the number of occurrences of A in B, separated by newline.

Sample Input 0

4
smart yekicmsmartplrplsmartrplplmrpsmartrpsmartwmrmsmartsmart
interviews interviewseiwcombvinterviewskrenlzp
ds dsdsajdsrjjdsjjj
algo yalgoalgoalgopalgoaxalgoasaxalgolalgoalgoalgo
Sample Output 0

6
2
4
9
'''
for _ in range(int(input())):
    s1,s2=input().split()
    n1,n2=len(s1),len(s2)
    ans=0
    for i in range(0,n2):
        if(s2[i:i+n1]==s1):
            ans+=1
    print(ans)
        
    
