
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
        int n, x;
        cin>>n>>x;
        if(n<=2){
            cout<<"1\n";
        }else{
            n -= 2;
            int k = n/x;
            int r = n%x;
            if(r==0){
                k++;
            }else{
                k += 2;
            }
            cout<<k<<"\n";
        }
    }

    return 0;  
}