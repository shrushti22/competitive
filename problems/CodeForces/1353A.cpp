
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
        long long int n, m;
        cin>>n>>m;

        if(n==1){
            cout<<"0\n";
        }else if(n==2){
            cout<<m<<"\n";
        }else{
            cout<<2*m<<"\n";
        }
    }

    return 0;  
}