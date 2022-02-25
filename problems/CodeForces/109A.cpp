
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

    int n;
    cin>>n;

    int x=0, minx=INT_MAX, miny=INT_MAX;

    while(4*x<=n){
        if((n-(4*x))%7==0){
            miny = (n-(4*x))/7;
            minx = x;
            break;
        }
        x++;
    }

    if(minx!=INT_MAX){
        string out;
        while(minx--){
            out += '4';
        }
        while(miny--){
            out += '7';
        }
        cout<<out;
    }else{
        cout<<"-1";
    }



    return 0;  
}