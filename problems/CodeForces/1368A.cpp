
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
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int cnt=0;
        int flag;
        if(a>=b){
            flag = 0;
        }else{
            flag=1;
        }
        while(a<=n && b<=n){

            if(flag){
                a += b;
                flag = 0;
            }else{
                b += a;
                flag = 1;
            }
            cnt++;
        }

        cout<<cnt<<"\n";
    }

    return 0;  
}