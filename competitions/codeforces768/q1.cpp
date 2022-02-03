
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
        int n;
        cin>>n;
        int a[n],b[n];
        int max_both = INT_MIN;

        for(int i=0;i<n;i++){
            cin>>a[i];
            max_both = max(a[i], max_both);
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            max_both = max(b[i], max_both);
        }

        int min_max = min(a[0], b[0]);

        for(int i=1;i<n;i++){
            min_max = max(min_max, min(a[i],b[i]));
        }

        cout<<max_both*min_max<<"\n";
    }

    return 0;  
}