
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
        int n, m;
        cin>>n>>m;
        int ans = 4;
        if(m%2==0){
            ans = m/2;
            ans = n*ans;
        }else if(n%2==0){
            ans = n/2;
            ans = m*ans;
        }else{
            ans = m/2;
            ans = n*ans;
            ans = ans + (n/2) + (n%2);
        }

        cout<<ans<<"\n";
    }
    return 0;  
}