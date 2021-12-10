
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n, l, r, k;
        cin>>n>>l>>r>>k;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int cnt = 0;
        for(int i=0;i<n && k>=a[i];i++){
            if(a[i]>=l && a[i]<=r && k>0 && k>=a[i]){
                cnt++;
                // cout<<cnt<<"\n";
                k -= a[i];
            } 
        }

        cout<<cnt<<"\n";
    }

    return 0;
}

