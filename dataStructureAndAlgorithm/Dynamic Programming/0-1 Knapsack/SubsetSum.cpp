#include <bits/stdc++.h>
using namespace std;

//recursion
bool subsetSum_recur(int arr[], int s, int n){
    if(s==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(arr[n-1]>s){
        return subsetSum_recur(arr, s, n-1);
    }else{
        return (subsetSum_recur(arr, s, n-1) || subsetSum_recur(arr, s-arr[n-1], n-1)); 
    }
}


// Memoization

int subsetSum(int arr[], int s, int n, int memo[][100000]){
    if(s==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(memo[n][s]==-1){
        if(arr[n-1]>s){
            memo[n][s] = subsetSum(arr, s, n-1, memo);
        }else{
            memo[n][s] = (subsetSum(arr, s, n-1, memo) | subsetSum(arr, s-arr[n-1], n-1, memo)); 
        }
    }

    return memo[n][s];
}


// tabulation

bool subsetSum_tab(int arr[], int s, int n){
    bool memo[n+1][s+1];
    for(int i=0;i<s+1;i++){
        memo[0][i] = false;
    }
    for(int i=0;i<n+1;i++){
        memo[i][0] = true;
    }

    for(int i=1;i<s+1;i++){
        for(int j=1;j<n+1;j++){
            if(arr[j-1]>i){
                memo[j][i] = memo[j-1][i];
            }else{
                memo[j][i] = (memo[j-1][i] || memo[j-1][i-arr[j-1]]); 
            }
        }
    }

    return memo[n][s];
}