
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

    int x[4];

    for(int i=0; i<4; i++){
        cin>>x[i];
    }

    sort(x, x + 4);

    cout<<x[3]-x[0]<<" "<<x[3]-x[1]<<" "<<x[3]-x[2]<<"\n";

    return 0;  
}