#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        
        int area = 0, curr;
        while(i<j){
            curr = min(height[i],height[j]) * (j-i);
            area = max(area, curr);
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        
        return area;
    }