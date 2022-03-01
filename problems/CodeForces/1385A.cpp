
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
        int x, y, z;
        cin>>x>>y>>z;
        if(x==y && y==z){
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }else if(x==y && x>z){
            cout<<"YES\n";
            cout<<x<<" "<<z<<" "<<z<<"\n";
        }else if(y==z && y>x){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<y<<"\n";
        }else if(z==x && z>y){
            cout<<"YES\n";
            cout<<y<<" "<<z<<" "<<y<<"\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;  
}