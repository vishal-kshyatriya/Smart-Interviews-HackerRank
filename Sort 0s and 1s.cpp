You are given an array of 0's and 1's. Sort the array in ascending order and print it.
Note: Solve using two-pointer technique.

Input Format

First line of input contains T - the number of test cases. Its followed by 2T lines, the first line contains N - the size of the array.
The second line contains the elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 1000
0 <= A[i] <= 1

Output Format

For each test case, sort the array in ascending order and print it on a new line.

Sample Input 0

2
5
0 1 1 0 1
6
1 1 1 1 1 0
Sample Output 0

0 0 1 1 1
0 1 1 1 1 1
Explanation 0

Self explanatory

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void separate(int ar[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            count++;
        }
    }
    for(int i=0;i<count;i++){
        ar[i]=0;
    }
    for(int i=count;i<n;i++){
        ar[i]=1;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        separate(ar,n);
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
