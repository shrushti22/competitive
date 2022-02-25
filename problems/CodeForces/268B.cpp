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
    
    cout<<((n*(n-1)*(n+1))/6) + n;
 
    return 0;  
}