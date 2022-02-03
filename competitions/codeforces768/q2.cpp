
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
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int cnt =0;
        int getsame = a[n-1];
        for(int i=1;(2*i)<=n;i++){
            int flag = 0;
            if(a[n-i-1]!=getsame){
                for(int j=n-(2*i); j<(n-i); j++){
                    if(getsame!=a[j]){
                        flag=1;
                        a[j] = getsame;
                    }
                }
                if(flag){
                    cnt++;
                }
            }   
        }

        int flag =0;
            int q = (n>>1);
            for(int i=0;i<q;i++){
                if(a[i]!=getsame){
                    flag=1;
                }
            }
            if(flag){
                cnt++;
            }

        cout<<cnt<<"\n";
    }

    return 0;  
}