#include <bits/stdc++.h>
using namespace std;

int kadanealgo(vector<int> &arr){
    int rsum = INT_MIN,csum = 0;

    for(int i=0;i<arr.size();i++){
        csum = csum + arr[i];
        if(rsum<csum){
            rsum = csum;
        }
        if(csum<0){
            csum = 0;
        }
    }
    return rsum;
}


int main(){
    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }

    int largestsum = kadanealgo(a);

    cout<<largestsum<<endl;
}