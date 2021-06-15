Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-overlapping-rectangles

/*
Given 2 rectangles parallel to coordinate axes, find the area covered by them.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-1. The second line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-2.

Constraints

1 <= T <= 10000
-106 < x,y <= 106
(xbl, ybl) < (xtr, ytr)

Output Format

For each test case, print the area covered by the 2 rectangles, separated by newline.

Sample Input 0

4
2 5 4 6
1 2 5 4
-4 -3 -2 5
-3 -5 1 3
1 0 3 5
2 3 5 8
-2 2 4 4
-3 1 5 5
Sample Output 0

10
42
23
32
*/

#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int a1,b1,a2,b2,x1,y1,x2,y2;
        cin>>a1>>b1>>a2>>b2;
        cin>>x1>>y1>>x2>>y2;
        int area1 = abs(a1-a2)*abs(b1-b2);
        int area2 = abs(x1-x2)*abs(y1-y2);
        int x_dist = min(a2, x2) - max(a1, x1);
        int y_dist = min(b2, y2) - max(b1, y1);
        int common_area = 0;
        if(x_dist > 0 && y_dist > 0)  common_area = x_dist * y_dist;
        int ans = area1+area2-common_area;
        cout<<ans<<endl;
    }
    return 0;
}
