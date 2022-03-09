
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

    long long int n, m, k;
    cin>>n>>m>>k;
    long long int a[n];
    long long int summ = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    long long int times = m/(k+1);
    long long int ans = ((a[n-1]*k + a[n-2])*times) + (m%(k+1))*a[n-1];
    cout<<ans;

    

    return 0;  
}