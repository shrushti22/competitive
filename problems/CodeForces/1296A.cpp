
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
        int odds=0, evens=0;
        for(int i=0; i<n ;i++){
            cin>>a[i];
            if(a[i]%2==0){
                evens++;
            }else{
                odds++;
            }
        }

        if(odds%2!=0){
            cout<<"YES\n";
        }else{
            if(evens>0 && odds>0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }

    }
    
    return 0;  
}