
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

    string tbl;
    cin>>tbl;

    vector<string> a(5);
    int flag =0;
    for(int i=0; i<5; i++){
        cin>>a[i];
        if(a[i][0]==tbl[0] || a[i][1]==tbl[1]){
            flag = 1;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;  
}