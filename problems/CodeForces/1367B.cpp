
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
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i%2==0 && a[i]%2==1){
                odds++;
            }else if(i%2==1 && a[i]%2==0){
                evens++;
            }
        }

        if(odds==evens){
            cout<<odds<<"\n";
        }else{
            cout<<"-1\n";
        }
    }

    return 0;  
}