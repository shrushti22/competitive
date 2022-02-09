
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
    long long int k = 1;
    long long int ans = 0;
    while(n){
        long long int r = n%10;
        n /= 10;
        if(r>=5){
            if(r==9 && n==0){
                ans += r*k;
            }else{
                ans += (9-r)*k; 
            }   
        }else{
            ans += r*k;
        }
        k *= 10; 
    }

    cout<<ans;

    return 0;  
}