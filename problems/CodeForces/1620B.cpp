
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
        long long int w,h;
        cin>>w>>h;
        long long int k;
        long long int minp,maxp;
        long long int x[4], t;

        for(int i=0; i<4; i++){
            cin>>k;
            cin>>minp;
            for(int j=0; j<k-2; j++){
                cin>>t;
            }
            cin>>maxp;
            x[i] = maxp - minp;
        }

        cout<<max(max(x[0],x[1])*h,max(x[2],x[3])*w)<<"\n";
    }

    return 0;  
}