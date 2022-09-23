Count Set Bits
Problem
Submissions
Leaderboard
Given a number N, find the number of bits that are set to 1 in its binary representation.

Input Format

First line of input contains T - the number of test cases. It is followed by T lines, each line contains a single integer N.

Constraints

1 <= T <= 104
0 <= N <= 1018

Output Format

For each test case, print the number of bits set to 1 in the binary representation of N, separated by a new line.

Sample Input 0

3
4
15
10
Sample Output 0

1
4
2
Explanation 0

Test-Case 1:
The binary representation of 4 is 100. The number of 1's in the binary representation of 4 is 1.

Test-Case 2:
The binary representation of 15 is 1111. The number of 1's in the binary representation of 15 is 4.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long countsb(long n){
    long cnt=0;
    while(n!=0){
        if((n&1)==1){
            cnt++;
        }
        n=n>>1;
    }
    return cnt;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long res=countsb(n);
        cout<<res<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
