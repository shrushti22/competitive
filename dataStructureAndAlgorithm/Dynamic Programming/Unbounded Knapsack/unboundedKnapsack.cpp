#include <bits/stdc++.h>
using namespace std;

int knapsack_recur(int wt[], int val[], int n, int W){
    if(W==0 || n==0){
        return 0;
    }

        int res;
    if(wt[n-1]<=W){
        res = max(knapsack_recur(wt, val, n-1, W), val[n-1] + knapsack_recur(wt, val, n, W-wt[n-1]));
    }else{
        res = knapsack_recur(wt, val, n-1, W);
    }

    return res;
}

int knapsack_memo(int wt[], int val[], int n, int W, int memo[][100000]){
    if(W==0 || n==0){
        return 0;
    }

    if(memo[n][W]==-1){
        if(wt[n-1]<=W){
            memo[n][W] = max(knapsack_memo(wt, val, n-1, W, memo), val[n-1] + knapsack_memo(wt, val, n, W-wt[n-1], memo));
        }else{
            memo[n][W] = knapsack_memo(wt, val, n-1, W, memo);
        }
    }

    return memo[n][W];
}

int knapsack_tab(int wt[], int val[], int n, int W){
    int t[n+1][W+1];
    for(int i=0;i<=n;i++){
        t[i][0] = 0;
    }
    for(int i=0;i<=W;i++){
        t[0][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<j){
                t[i][j] = max(t[i-1][j], val[n-1] + t[i][j-wt[i-1]]);
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][W];
}