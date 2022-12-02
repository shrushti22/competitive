
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
        int n,m,k;
        cin>>n>>m>>k;

        int win = 0, maxp = 0;

        win = (n/k);

        if(m<=win){
            win = m;
            m=0; 
            maxp =0;
        }else{
            m = m-win;
            int q = (m/(k-1));
            int r = (m%(k-1));
            if(r > 0){
                maxp = q+1;
            }else{
                maxp =  q;
            }
            
        }

        cout<<win-maxp<<"\n";
    }

    return 0;  
}