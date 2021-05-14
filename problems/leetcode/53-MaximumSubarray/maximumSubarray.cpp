#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int rsum = INT_MIN, csum=0;
        for(int i=0;i<nums.size();i++){
            csum += nums[i];
            if(rsum<csum){
                rsum = csum;
            }
            if(csum<0){
                csum = 0;
            }
        }
        
        return rsum;
    }