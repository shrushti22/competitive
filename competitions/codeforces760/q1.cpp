
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
        int b[7];

        for(int i=0;i<7;i++){
            cin>>b[i];
        }

        if(b[0]+b[1]+b[2]==b[6]){
            cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<"\n";
        }else{
            cout<<b[0]<<" "<<b[1]<<" "<<b[3]<<"\n";
        }
    }

    return 0;  
}