
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
        long long int a, b, c;
        cin>>a>>b>>c;

        if(a>=c){
            cout<<"-1 ";
        }else{
            cout<<"1 ";
        }

        if(a*b<=c){
            cout<<"-1";
        }else{
            cout<<b;
        }
        cout<<"\n";
    }

    return 0;  
}