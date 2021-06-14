#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int t=n;
    
    int i=0;
    while(k-t>=0 && i+1<n && a[i]+a[n-1]<=a[i+1]+a[i+1]){
        i++;
        k=k-t;
        t--;
    }
    if(k==0){
        cout<<a[i-1]+a[n+1];
    }else{
        long long int low = a[i]+a[i];
        long long int high = a[n-1]+a[n-1];
        int start = i;
        while(low<=high){
            long long int mid = (low+high)/2;
            long long int cntless = 0,cnteql = 0;
            int i=start;
            int cnt = t;
            while(a[i]+a[n-1]<=a[i+1]+a[i+1] && a[i]+a[n-1]<mid){
                cntless = cntless + t;
                i++;
            }
            while(i<n){
                for(int j=i;j<n;j++){
                    if(a[i]+a[j]<mid){
                        cntless++;
                    }else if(a[i]+a[j]==mid){
                        cnteql++;
                    }
                }
                i++;
            }
            if(cntless<k && (cntless+cnteql)>=k){
                cout<<mid;
                break;
            }else if(cntless>=k){
                high = mid-1;
            }else if(cnteql){
                low = mid + 1;
            }

        }
    }
    
    return 0;
}