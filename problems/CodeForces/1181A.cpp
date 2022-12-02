
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

    long long int x,y,z;

    cin>>x>>y>>z;
    cout<<(x/z) + (y/z) + (((x%z) + (y%z))/z)<<" "<<((((x%z) + (y%z))/z)>0 ? (z - max(x%z, y%z)) : 0);

    return 0;  
}