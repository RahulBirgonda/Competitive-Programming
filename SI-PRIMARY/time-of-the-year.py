Link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-time-of-the-year

    '''
Given the number of seconds elapsed since epoch [01-01-1970 00:00:00 Thursday], you need to find the current date, along with the day.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains the number of seconds elapsed since epoch.

Constraints

1 <= T <= 10000
0 <= S <= 109

Output Format

For each test case, print the date in DD-MMM-YYYY format, followed by the day, separated by newline.

Sample Input 0

10
86399
86400
2592000
2678400
8639999
8640000
31535999
31536000
68169599
68169600
Sample Output 0

01-JAN-1970 Thursday
02-JAN-1970 Friday
31-JAN-1970 Saturday
01-FEB-1970 Sunday
10-APR-1970 Friday
11-APR-1970 Saturday
31-DEC-1970 Thursday
01-JAN-1971 Friday
28-FEB-1972 Monday
29-FEB-1972 Tuesday
'''
    
import time
for _ in range(int(input())):
    st=time.gmtime(int(input()))
    date={1: "01",2: "02",3: "03",4: "04",5: "05",6: "06",7: "07",8: "08",9: "09"}
    for i in range(10,32):
        date[i]=str(i)
    month={1:"JAN",2:"FEB",3:"MAR",4:"APR",5:"MAY",6:"JUN",7:"JUL",8:"AUG",9:'SEP',10:'OCT',11:'NOV',12:'DEC'}
    day={0:"Monday",1:"Tuesday",2:"Wednesday",3:"Thursday",4:"Friday",5:"Saturday",6:"Sunday"}
    print(date[st.tm_mday]+"-"+month[st.tm_mon]+"-"+str(st.tm_year),day[st.tm_wday])
    #time.struct_time(tm_year=1970, tm_mon=1, tm_mday=1, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=3, tm_yday=1, tm_isdst=0)
