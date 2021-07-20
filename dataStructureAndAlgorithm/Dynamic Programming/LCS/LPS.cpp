// Longest Palindromic Subsequence

#include <bits/stdc++.h>
using namespace std;

int tab(string a, int n){
    int t[n+1][n+1];
    for(int i=0;i<=n;i++){
        t[i][0] = 0;
        t[0][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1]==a[n-j]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    return t[n][n];
    
}