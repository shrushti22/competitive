#include <bits/stdc++.h>

using namespace std;

void sortColors(vector<int>& nums){
    int n = nums.size();
    int low=0, mid=0, high=n-1;
    while(mid<high){
        if(nums[mid]==0){
            nums[mid] = nums[low];
            nums[low] = 0;
            low++;
            mid++;
        }else if(nums[mid]==2){
            nums[mid] = nums[high];
            nums[high] = 2;
            high--;
        }else{
            mid++;
        }
    }
}

int main(){
    vector<int> nums;
    int n,temp;

    // size of array
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }

    sortColors(nums);
    cout<<"the array after sorting is"<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }


}