#include <bits/stdc++.h>
using namespace std;


int recur(string s1, string s2, int n, int m, int res){
    if(n==0 || m==0){
        return res;
    }

    if(s1[n-1]==s2[m-1]){
        res = recur(s1, s2, n-1, m-1, res+1);
    }

    return max(res, max(recur(s1, s2, n-1, m, 0), recur(s1, s2, n, m-1, 0)));
}

int tab(string s1, string s2, int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        t[i][0] = 0;
    }
    for(int i=0;i<=m;i++){
        t[0][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = 0;
            }
        }
    }

    return t[n][m];
}