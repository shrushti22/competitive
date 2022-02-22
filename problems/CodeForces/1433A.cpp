
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
        int r = n%10;
        int ans = (r-1)*10;
        int dig = 0;
        while(n){
            n /= 10;
            dig++;
        }
        
        ans += (dig*(dig+1))/2;

        cout<<ans<<"\n";

    }

    return 0;  
}