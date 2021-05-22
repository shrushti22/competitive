#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if(n2<n1){
            nums1.swap(nums2);
            n1 = nums1.size();
            n2 = nums2.size();
        }
        int low = 0;
        int high = n1;
        while(low<=high){
            int p1 = (low+high)/2;
            int p2 = (n1+n2+1)/2 - p1;
            
            int max1 = (p1==0) ? INT_MIN : nums1[p1-1];
            int min1 = (p1==n1) ? INT_MAX : nums1[p1];
            
            int max2 = (p2==0) ? INT_MIN : nums2[p2-1];
            int min2 = (p2==n2) ? INT_MAX : nums2[p2];
            
            if(max1<=min2 && max2<=min1){
                if((n1+n2)%2==0){
                    double res;
                    res = float(max(max1,max2) + min(min1,min2))/2;
                    return res;
                }else{
                    double res = max(max1,max2);
                    return res;
                }
            }
            if(max1>min2){
                high = p1-1;
            }else{
                low = p1+1;
            }
        }
        return 0;
    }
