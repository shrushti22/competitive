
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

    int x[3];
    cin>>x[0]>>x[1]>>x[2];
    sort(x, x+3);

    cout<<abs(x[1]-x[0])+abs(x[2]-x[1]);

    return 0;  
}