Product of 2 Matrices
Problem
Submissions
Leaderboard
Given 2 matrices, find the product.

Input Format

First line of input contains T - number of test cases. First line of each test case contains N1, M1 - size of the 1st matrix. Its followed by N1 lines each containing M1 intergers - elements of the 1st matrix. The next line contains N2, M2 - size of the 2nd matrix. Its followed by N2 lines each containing M2 intergers - elements of the 2nd matrix. Note that M1 = N2.

Constraints

1 <= T <= 100
1 <= N1,M1,N2,M2 <= 50
-100 <= mat[i][j] <= 100

Output Format

For each test case, print the resultant product matrix, separated by newline.

Sample Input 0

2
2 2
1 2 
3 -1 
2 3
1 -2 3 
2 3 -1 
2 3
27 29 53 
-28 49 -24 
3 4
23 52 -38 72 
-64 15 -59 -10 
-75 43 10 25 
Sample Output 0

5 4 1 
1 -9 10 
-5210 4118 -2207 2979 
-1980 -1753 -2067 -3106 
  
  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n1,m1;
        cin>>n1>>m1;
        int arr1[n1][m1];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                cin>>arr1[i][j];
            }
        }
        int n2,m2;
        cin>>n2>>m2;
        int arr2[n2][m2];
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                cin>>arr2[i][j];
            }
        }
        int sum;
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                sum=0;
                for(int k=0;k<m1;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
