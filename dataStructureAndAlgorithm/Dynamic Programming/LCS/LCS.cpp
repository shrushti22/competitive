#include <bits/stdc++.h>
using namespace std;

int recur(string s1, string s2, int n, int m){
    if(n==0 || m==0){
        return 0;
    }
    int res;
    if(s1[n-1]==s2[m-1]){
        res = 1 + recur(s1, s2, n-1, m-1);
    }else{
        res = max(recur(s1, s2, n-1, m), recur(s1, s2, n, m-1));
    }

    return res;
}

int memoize(string s1, string s2, int n, int m, int memo[][100000]){
    if(n==0 || m==0){
        return 0;
    }

    if(memo[n][m]==-1){
        if(s1[n-1]==s2[m-1]){
            memo[n][m] = 1 + memoize(s1, s2, n-1, m-1, memo);
        }else{
            memo[n][m] = max(memoize(s1, s2, n-1, m, memo), memoize(s1, s2, n, m-1, memo));
        }
    }

    return memo[n][m];
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
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    return t[n][m];
}