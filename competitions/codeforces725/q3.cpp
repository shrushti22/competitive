#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    long long int l,r;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>l>>r;
        long int a[n];
        for(long long int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a, a+n);
        long long int cnt =0;
        for(int j=n-1;j>=1;j--){
            int low =0, high=j-1;
            if(a[high]+a[j]>=l && a[low]+a[j]<=r){
                while(low<high && a[low]+a[j]<l){
                    low++;
                }
                while(low<high && a[high]+a[j]>r){
                    high--;
                }
                if(low<high){
                    cnt += (high-low) + 1;
                }else if(low==high){
                    if(a[low]+a[j]>=l && a[low]+a[j]<=r){
                        cnt++;
                    }
                } 
            }
        }

        cout<<cnt<<"\n";
    }

    return 0;
}