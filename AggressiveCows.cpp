https://www.spoj.com/problems/AGGRCOW/

/*
AGGRCOW - Aggressive cows
#binary-search
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.
*/

#include <bits/stdc++.h>
using namespace std;

int canPlace(int arr[], int n, int k, int mid){
    int curr=arr[0],cnt=k-1;
    for(int i=0;i<n;i++){
        if(arr[i]-curr>=mid){
            cnt--;
            curr=arr[i];
        }
        if(cnt==0) return 1;
    }
    return 0;
}
        
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr,arr+n);
        int high=arr[n-1]-arr[0],low=1,mid,ans;
        
       
        
        while(low<=high){
            mid=(low+high)/2;
            if(canPlace(arr,n,k,mid)==1){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
