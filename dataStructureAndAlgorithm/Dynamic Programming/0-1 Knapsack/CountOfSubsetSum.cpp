#include <bits/stdc++.h>
using namespace std;


// recursive

int count(int arr[], int s, int n){
    if(s==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(arr[n-1]>s){
        return count(arr, s, n-1);
    }else{
        return count(arr, s, n-1) + count(arr, s-arr[n-1], n-1);
    }
}


//memoization
int count_memo(int arr[], int s, int n, int memo[][100000]){
    if(s==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(memo[n][s]==-1){
        if(arr[n-1]>s){
            memo[n][s] = count_memo(arr, s, n-1, memo);
        }else{
            memo[n][s] = count_memo(arr, s, n-1, memo) + count_memo(arr, s-arr[n-1], n-1, memo);
        }
    }

    return memo[n][s];
}

//tabulation
int count_tab(int arr[], int s, int n){
    int dp[n+1][s+1];
    for(int i=0;i<s+1;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<n+1;i++){
        dp[i][0] = 1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(arr[i-1]>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
        }
    }

    return dp[n][s];
}