Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-subsets-of-an-array

/*
Given an array of unique integer elements, print all the subsets of the given array in lexicographical order.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= T <= 100
1 <= N <= 10
0 <= A[i] <= 100

Output Format

For each test case, print the subsets of the given array in lexicographical order, separated by new line. Print an extra newline between output of different test cases.

Sample Input 0

3
3
5 15 3 
2
57 96 
4
3 15 8 23 
Sample Output 0

3 
3 5 
3 5 15 
3 15 
5 
5 15 
15 

57 
57 96 
96 

3 
3 8 
3 8 15 
3 8 15 23 
3 8 23 
3 15 
3 15 23 
3 23 
8 
8 15 
8 15 23 
8 23 
15 
15 23 
23 
*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> final_ans;

void print_subsets(int arr[],int idx,int n,vector<int> ans){
    if(idx==n){
        if(ans.size()==0){

        }
        else{
            final_ans.push_back(ans);
        }
        return;
    }
    vector<int> temp = ans;
    print_subsets(arr,idx+1,n,ans);
    temp.push_back(arr[idx]);
    print_subsets(arr,idx+1,n,temp);
}

int main() {
    int t;
    cin>>t;
    while(t--){
    final_ans.clear();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);
    vector<int> ans;
    print_subsets(a,0,n,ans);
    sort(final_ans.begin(),final_ans.end());
    int s = final_ans.size();
    for(int p=0;p<s;p++){
        for(int j=0;j<final_ans[p].size();j++){
            cout<<final_ans[p][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    }
    return 0;
}
