
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
        int n, m, rb, cb, rd, cd;

        cin>>n>>m>>rb>>cb>>rd>>cd;
        int dr=1, dc=1;
        int time=0;
        while(1){
            if((rb==n && dr==1) || (rb==1 && dr==-1)){
                dr=-dr;
            }
            if((cb==m && dc==1) || (cb==1 && dc==-1)){
                dc=-dc;
            }
            if(rb==rd || cb==cd){
                break;
            }
            time++;
            rb+=dr;
            cb+=dc;
        }
        cout<<time<<"\n";
    }

    return 0;  
}