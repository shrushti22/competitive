

#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int m = 1000000000;
    int t,n,k;
    while(t--){
        cin>>n>>k;
        long long int c[k];
        long long int f[k];
        for(int i=0;i<k;i++){
            cin>>c[k];
            c[k] = c[k]%m;
        }
        for(int i=0;i<k;i++){
            cin>>f[k];
            f[k] = f[k]%m;
        }

        if(n<k){
            cout<<f[n-1];
        }else{
            for(int i=k;i<n;i++){
                int l =i-1;
                f[i]=0;
                for(int j=0;j<k;j++){
                    f[i] += ((c[j]*f[l])%m);
                    l--;
                }
            }
            cout<<f[n-1];
        }
    }

    return 0;
}