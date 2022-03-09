
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
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int tot = a+b+c+n;

        if(tot%3==0 || (n==0 && a==b==c)){
            int req = tot/3;
            int flag = 1;
            if(a>req || b>req || c>req){
                flag = 0;
            }

            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }

        }else{
            cout<<"NO\n";
        }
    }

    return 0;  
}