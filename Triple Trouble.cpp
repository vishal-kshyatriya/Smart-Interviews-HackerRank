Triple Trouble
Problem
Submissions
Leaderboard
Given an array of size 3X+1, where every element occurs three times, except one element, which occurs only once. Find the element that occurs only once.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array (of the form 3X + 1) and second line contains the elements of the array.

Constraints

1 <= T <= 300
1 <= N <= 104
1 <= A[i] <= 109

Output Format

For each test case, print the number which occurs only once, separated by new line.

Sample Input 0

2
10
5 7 8 7 7 5 5 9 8 8 
7
10 20 20 30 20 10 10 
Sample Output 0

9
30
Explanation 0

Self Explanatory

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void merge(int ar[],int lo,int mid,int hi){
    int temp[hi-lo+1];
    int p1=lo,p2=mid+1,k=0;
    while(p1<=mid && p2<=hi){
        if(ar[p1]<=ar[p2]){
            temp[k++]=ar[p1++];
            
        }
        else{
            temp[k++]=ar[p2++];
            
        }
    }
        while(p1<=mid){
            temp[k++]=ar[p1++];
        }
        while(p2<=hi){
            temp[k++]=ar[p2++];
        }
        for(int i=lo;i<=hi;i++){
            ar[i]=temp[i-lo];
        }
    
    
    
}
void ms(int ar[],int lo, int hi){
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    ms(ar,lo,mid);
    ms(ar,mid+1,hi);
    merge(ar,lo,mid,hi);
}
int main() {
    int tc,n;
    scanf("%d\n",&tc);
    while(tc--){
        scanf("%d\n",&n);
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d ",&ar[i]);
        }
         ms(ar,0,n-1);
         for(int i=0;i<n;i++){
             if(ar[i]!=ar[i+1])
                 printf("%d\n",ar[i]);
             else i+=2;
         }
    }    
    return 0;
}
