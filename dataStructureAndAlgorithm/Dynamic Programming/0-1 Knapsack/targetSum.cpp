#include <bits/stdc++.h>
using namespace std;


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



   

int targetSum(int arr[], int n, int s){
    int summ = 0;
    for(int i=0;i<n;i++){
        summ += arr[i];
    }

    return count_tab(arr, (summ-s)/2, n);
}