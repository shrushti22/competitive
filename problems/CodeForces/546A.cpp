
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
    
    long long int k, w, n;
    cin>>k>>n>>w;
    long long int tp = ((w*(w+1))/2) *k;
    if(n>=tp){
        cout<<"0";
    }else{
        cout<<tp-n;
    }
    return 0;  
}