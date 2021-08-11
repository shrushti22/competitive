#include <bits/stdc++.h>

using namespace std;

int recur(int arr[], int i, int j){
    if(i>=j){
        return 0;
    }
    int mn = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp = recur(arr, i, k) + recur(arr, k+1, j) + arr[i-1]*arr[k]*arr[j];
        if(temp<mn){
            mn = temp;
        }
    }

    return mn;
}

int memosol(int arr[], int i, int j, int memo[][10000]){
    if(i>=j)
        return 0;

    if(memo[i][j]==-1){
        memo[i][j] = INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp = memosol(arr, i, k, memo) + memosol(arr, k+1, j, memo) + arr[i-1]*arr[k]*arr[j];
            if(temp<memo[i][j]){
                memo[i][j] = temp;
            }
        }
    }

    return memo[i][j];
}