
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

    int a,b,s;

    cin>>a>>b>>s;
    a = abs(a);
    b = abs(b);
    if((s-(a+b))>=0 && (s-(a+b))%2==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;  
}