/*

Abbreviation


You can perform the following operations on the string, a:

Capitalize zero or more of a's lowercase letters.
Delete all of the remaining lowercase letters in a .
Given two strings, a and b, determine if it's possible to make a equal to b  as described. If so, print YES on a new line. Otherwise, print NO.

For example, given a = AbcDE and b = ABDE, in  we can convert b and delete c to match . If a = AbcDE and b = AFDE, matching is not possible because letters may only be capitalized or discarded, not changed.

Function Description

Complete the function abbreviation in the editor below. It must return either YES  or NO .

abbreviation has the following parameter(s):

a: the string to modify
b: the string to match
Input Format

The first line contains a single integer q, the number of queries.

Each of the next q pairs of lines is as follows:
- The first line of each query contains a single string, a.
- The second line of each query contains a single string, b.

Constraints :

1<=q<=10
1<=|a|,|b|<=1000

String a  consists only of uppercase and lowercase English letters, ascii[A-Za-z].
String b consists only of uppercase English letters, ascii[A-Z].
Output Format

For each query, print YES on a new line if it's possible to make string a  equal to string b . Otherwise, print NO.

Sample Input

1
daBcd
ABC

Sample Output

YES

Explanation

We have a = daBcd and b =  ABC. We perform the following operation:

Capitalize the letters a and c in  so that  dABCd.
Delete all the remaining lowercase letters in  so that  ABC.
Because we were able to successfully convert  to , we print YES on a new line.

*/