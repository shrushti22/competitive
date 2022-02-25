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
 
    long long int n, m;
 
    cin>>n>>m;
    
    if(m>n){
        cout<<"-1";
    }else{
        int i=0;
        while(((2*i*m) - n) < 0){
            i++;
        }
        cout<<i*m;
    }
 
    return 0;  
}