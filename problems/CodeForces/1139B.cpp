
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

    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long int tot = a[n-1];
    long long int last = a[n-1];
    for(int i=n-2; i>=0; i--){
        if(a[i]<last){
            tot += a[i];
            last = a[i];
        }else if(last>0){
            tot += (last - 1LL);
            last -= 1LL;
        }else{
            break;
        }
    }

    cout<<tot;

    return 0;  
}