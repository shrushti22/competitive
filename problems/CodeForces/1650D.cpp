
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int k;
        for(int i=0; i<n; i++){
            cin>>k;
            a[k-1]=i+1;
        }

        // for(int i=0; i<n; i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<"\n";

        
        int b[n];
        b[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--){
            k = a[i];
            for(int j=n-1; j>i; j--){
                k -= b[j];
                if(k<0){
                    k += (j+1);
                }
            }
            b[i] = k%(i+1);
        }

        for(int i=0; i<n ;i++){
            cout<<b[i]<<" ";
        }

        cout<<"\n";

        
    }

    return 0;  
}