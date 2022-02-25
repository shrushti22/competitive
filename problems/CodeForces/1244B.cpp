
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

        string s;
        cin>>s;
        int x = -1,y = -1;

        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                y=i;
                if(x==-1){
                    x=i; 
                }
            }
        }

        if(x==-1 && y==-1){
            cout<<n<<"\n";
        }else if(x==y){
            int ans = 2*(max(x+1, n-x));
            cout<<ans<<"\n";
        }else{
            int ans = 2*(max(x+1,n-y) + (y-x));
            cout<<ans<<"\n";
        }

    }

    return 0;  
}