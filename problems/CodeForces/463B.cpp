
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

    int n;
    cin>>n;
    int h[n+1];
    h[0] = 0;
    for(int i=1; i<=n; i++){
        cin>>h[i];
    }

    int curr = 0;
    int dollars = 0;

    for(int i=1; i<=n; i++){
        curr += (h[i-1]-h[i]);
        if(curr<0){
            dollars += abs(curr);
            curr = 0;
        }
    }

    cout<<dollars;
    return 0;  
}