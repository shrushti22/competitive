
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

    long long int n;
    cin>>n;
    if(n%2==0){
        if(n%4==0){
            cout<<(n/4)-1;
        }else{
            cout<<(n/4);
        }
    }else{
        cout<<"0";
    }

    return 0;  
}