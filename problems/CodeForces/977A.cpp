
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

    int n , k;
    cin>>n>>k;

    while(k--){
        if(n%10!=0){
            n--;
        }else{
            n = n/10;
        }
    }

    cout<<n;

    return 0;  
}