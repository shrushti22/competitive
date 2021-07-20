#include <bits/stdc++.h>
using namespace std;

string tab(string s1, string s2, int n, int m){
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

    string ans = "";

    for(int i=n, j=m;i>0 && j>0;){
            if(s1[i-1]==s2[j-1]){
                ans = ans + s1[i-1];
                i--;
                j--;
            }else{
                if(t[i][j-1]>=t[i-1][j]){
                    j--;
                }else{
                    i--;
                }
            }
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}