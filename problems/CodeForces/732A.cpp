
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

    int k, r;
    cin>>k>>r;
    int i=1;
    int curr = k;
    while(curr%10!=r && curr%10!=0){
        i++;
        curr += k;
    }
    cout<<i;

    return 0;  
}