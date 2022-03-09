
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
        int a, b;
        cin>>a>>b;  
        int req = abs(a-b);
        int moves = 0;
        moves = req/10;
        if(req%10!=0){
            moves++;
        }

        cout<<moves<<"\n";
    }

    return 0;  
}