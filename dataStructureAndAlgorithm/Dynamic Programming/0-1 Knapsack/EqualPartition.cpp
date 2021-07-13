
#include <bits/stdc++.h>
 
using namespace std;

bool subsetSum_tab(int arr[], int s, int n){
    bool memo[n+1][s+1];
    for(int i=0;i<s+1;i++){
        memo[0][i] = false;
    }
    for(int i=0;i<n+1;i++){
        memo[i][0] = true;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<s+1;j++){
            if(arr[i-1]>j){
                memo[i][j] = memo[i-1][j];
            }else{
                memo[i][j] = (memo[i-1][j] || memo[i-1][j-arr[i-1]]); 
            }
        }
    }

    return memo[n][s];
}

bool equalPartition(int arr[],int n){
    int summ =0;
    for(int i=0;i<n;i++){
        summ += arr[i];
    }

    if(summ%2 == 0){
        return subsetSum_tab(arr, summ/2, n);
    }else{
        return false;
    }
}