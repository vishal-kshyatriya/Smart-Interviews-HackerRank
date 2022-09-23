Sum of Pairs
Problem
Submissions
Leaderboard
Given an array of integers and a number K, check if there exist a pair of indices i,j s.t. a[i] + a[j] = K and i!=j.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, first line of each test case contains N - size of the array and K, and the next line contains N integers - the elements of the array.

Constraints

30 points
1 <= T <= 100
2 <= N <= 1000

70 points
1 <= T <= 300
2 <= N <= 10000

General Constraints
-108 <= K <= 108
-108 <= ar[i] <= 108

Output Format

For each test case, print "True" if such a pair exists, "False" otherwise, separated by newline.

Sample Input 0

3
5 -15
-30 15 20 10 -10 
2 20
10 10 
4 7
-4 0 10 -7 
Sample Output 0

True
True
False

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void merge(long int ar[],long int lo,long int mid,long int hi){
    long temp[hi-lo+1];
    long p1=lo,p2=mid+1,k=0;
    while(p1<=mid&&p2<=hi){
        if(ar[p1]<ar[p2])
            temp[k++]=ar[p1++];
        else
            temp[k++]=ar[p2++];
    }
    while(p2<=hi){
        temp[k++]=ar[p2++];
    }
    while(p1<=mid){
        temp[k++]=ar[p1++];
    }
    for(long int i=0;i<(hi-lo)+1;i++){
          ar[lo+i]=temp[i];
    }
}

void ms(long ar[],long lo,long hi){
    if(lo<hi){
        long int mid=(lo+hi)/2;
      
        ms(ar,mid+1,hi);
          ms(ar,lo,mid);
        merge(ar,lo,mid,hi);
    }
}

bool sum(long int ar[],long int n,long int k){
    long int p1=0,p2=n-1;
    while(p1!=p2){
        if(ar[p1]+ar[p2]==k){
            return true;
        }
        else if(ar[p1]+ar[p2]<k){
            p1++;
            
        }
        else {
            p2--;
        }
    }
    return false;
}


int main() {
    int t;
    cin>>t;
    while(t--){
       long int n,k;
        cin>>n>>k;
        long int ar[n];
        for(long int i=0;i<n;i++){
            cin>>ar[i];
        }
        ms(ar,0,n-1);

        if(sum(ar,n,k)==1){
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
    }
    return 0;
}
