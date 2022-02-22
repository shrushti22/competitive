
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

    int n, m;
    cin>>n>>m;

    
    int flag = m%n;
    if(flag){
        cout<<"-1";
    }else{
        int q = m/n;
        int cnt=0;
        while(q%2==0){
            q /= 2;
            cnt++;
        }
        while(q%3==0){
            q /= 3;
            cnt++;
        }
        if(q==1){
            cout<<cnt;
        }else{
            cout<<"-1";
        }
        
    }

    return 0;  
}