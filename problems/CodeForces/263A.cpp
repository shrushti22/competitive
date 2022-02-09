
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

    int a[5][5];
    int col, row;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                col= j+1;
                row = i+1;
            }
        }
    }

    int ans = 0;

    if(col>=3){
        ans += col-3;
    }else{
        ans += 3-col;
    }

    if(row>=3){
        ans += row-3;
    }else{
        ans += 3-row;
    }

    cout<<ans;

    return 0;  
}