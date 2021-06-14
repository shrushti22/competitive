#include<bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        int min_idx, max_idx;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]==1){
                min_idx = j;
            }
            if(a[j]==n){
                max_idx=j;
            }
        }

        int c1,c2,c3,c4;
        int ans = INT_MAX;
        c1 = max(min_idx,max_idx) +1;
        ans = min(ans, c1);
        c2 = n - min(min_idx,max_idx);
        ans = min(ans, c2);
        c3 = (min_idx+1) + (n-max_idx);
        ans = min(ans, c3);
        c4 = (max_idx+1) + (n-min_idx);
        ans = min(ans, c4);

        cout<<ans<<"\n";
    }


    return 0;
}