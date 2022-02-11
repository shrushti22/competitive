
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

    vector<pair<int, int>> a(n);
    int entry, exit;
    int ans = INT_MIN;
    int currStrength = 0;
    for(int i=0; i<n; i++){
        cin>>exit>>entry;
        a[i] = make_pair(exit, entry);
        currStrength -= exit;
        currStrength += entry;
        ans = max(currStrength, ans);
    }

    cout<<ans;

    return 0;  
}