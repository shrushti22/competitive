//minimum number of insertion and deletion to convert string a to b
#include <bits/stdc++.h>
using namespace std;
int tab(string a, string b, int n, int m){
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        t[i][0] = 0;
    }
    for(int i=0;i<=m;i++){
        t[0][i] = 0;
    }

    for(int i=1; i<=n; i++){
        for (int j = 1; j<=m; j++)
        {
            if(a[i-1]==b[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }   
    }

    return n+m-(2*t[n][m]);
}