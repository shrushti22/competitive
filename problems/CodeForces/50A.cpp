
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

    int m, n;
    cin>>m>>n;

    if(m%2==0){
        cout<<n*(m/2);
    }else if(n%2==0){
        cout<<m*(n/2);
    }else{
        cout<<n*(m/2) + (n/2);
    }
    return 0;  
}