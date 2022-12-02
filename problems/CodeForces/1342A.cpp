
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
        long long int x,y;
        cin>>x>>y;
        long long int a,b;
        cin>>a>>b;
        long long int ans = 0;
        if((x>=0 && y>=0) || (x<0 && y<0)){
            x = abs(x);
            y = abs(y);
            if(2*a > b){
                ans = (b*min(x,y)) + (a*(max(x,y)-min(x,y)));
            }else{
                ans = a*(x+y);
            }
        }else{
            ans = a*(abs(x)+abs(y));    
        }

        cout<<ans<<"\n";
    }

    return 0;  
}