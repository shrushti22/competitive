
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

    int n, k;
    cin>>n>>k;
    int a[n];
    vector<int> b(k, 0);

    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i]-1]++;
    }
    int extra = 0;
    for(int i=0; i<k; i++){
        extra+= b[i]%2;
    }

    cout<<n - (extra/2);


 
    return 0;  
}