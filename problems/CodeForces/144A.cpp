
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

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int min_idx = 0, max_idx = 0;
    for(int i=1; i<n; i++){
        if(a[i]>a[max_idx]){
            max_idx = i;
        }
        if(a[i]<=a[min_idx]){
            min_idx = i;
        }
    }

    int t = 0;

    t += max_idx;

    if(min_idx<max_idx){
        min_idx++;
    }

    t += (n-1) - min_idx;

    cout<<t;

    return 0;  
}