
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

        if(n%2==0){
            cout<<(n/2)-1<<"\n";
        }else{
            cout<<(n/2)<<"\n";
        }
    }
    return 0;  
}