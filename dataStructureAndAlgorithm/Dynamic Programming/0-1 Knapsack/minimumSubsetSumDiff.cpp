#include <bits/stdc++.h>
using namespace std;



int minimumSubsetSumDiff(int arr[], int n){
    int summ =0;

    for(int i=0;i<n;i++){
        summ += arr[i];
    }

    int half = summ/2;

    bool memo[n+1][half+1];
    for(int i=0;i<half+1;i++){
        memo[0][i] = false;
    }
    for(int i=0;i<n+1;i++){
        memo[i][0] = true;
    }

    for(int i=1;i<half+1;i++){
        for(int j=1;j<n+1;j++){
            if(arr[j-1]>i){
                memo[j][i] = memo[j-1][i];
            }else{
                memo[j][i] = (memo[j-1][i] || memo[j-1][i-arr[j-1]]); 
            }
        }
    }

    for(int i=half;i>=0;i--){
        if(memo[n][i]){
            return summ - (2*i);
        }
    }
}

