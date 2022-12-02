
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
        long long int n;
        cin>>n;
        long long int r = n%14;
        long long int q = n/14;
        if(q>=1 && r>=1 && r<=6){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;  
}