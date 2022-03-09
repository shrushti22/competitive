
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
    
    if(t%5==0){
        cout<<(t/5);
    }else{
        cout<<(t/5)+1;
    }

    return 0;  
}