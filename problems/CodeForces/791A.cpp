
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

    int n, m;
    cin>>n>>m;
    int years = 0;
    while(n<=m){
        n *= 3;
        m *= 2;
        years++;
    }

    cout<<years;

    return 0;  
}