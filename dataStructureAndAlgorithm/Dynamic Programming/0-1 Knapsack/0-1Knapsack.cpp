#include<bits/stdc++.h>

using namespace std;

// recursive

int knapsack_recursive(int wt[], int ct[], int w, int n){
    if(n==0 || w==0){
        return 0;
    }

    if(wt[n-1]>w){
        return knapsack_recursive(wt, ct, w, n-1);
    }else {
        return max(ct[n-1] + knapsack_recursive(wt, ct, w - wt[n-1], n-1), knapsack_recursive(wt, ct, w, n-1));  
    }
}


//memoize

int knapsack(int wt[], int ct[], int w, int n, int memo[][10000000]){
    if(n==0 || w==0){
        return 0;
    }
    if(memo[n][w]==-1){
        if(wt[n-1]>w){
            memo[n][w] = knapsack(wt, ct, w, n-1, memo);
        }else {
            memo[n][w] = max(ct[n-1] + knapsack(wt, ct, w - wt[n-1], n-1, memo), knapsack(wt, ct, w, n-1, memo));  
        }
    }
    return memo[n][w];
}

// tabulation
int knapsack(int wt[], int ct[], int w, int n){
    vector<vector<int>> dp(n+1, vector<int> (w+1,0));

    for(int i=1;i<w+1;i++){
        for(int j=1;j<n+1;j++){
            if(wt[j-1]>i){
                dp[j][i] = dp[j-1][i];
            }else{
                dp[j][i] = max(dp[j-1][i], dp[j-1][i-wt[j-1]]);
            }
        }
    }
    return dp[n][w];
    
}