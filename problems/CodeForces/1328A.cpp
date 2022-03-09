
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
        int a, b;
        cin>>a>>b;

        cout<<((a%b==0)? 0 : (b-(a%b)))<<"\n";
    }

    return 0;  
}