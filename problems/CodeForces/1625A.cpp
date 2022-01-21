
#include<bits/stdc++.h>

using namespace std;

void countDigits(int a, vector<int> &cnt){
    int i=0;

    while(a){
        cnt[i] += a&1;
        a = a>>1;
        i++;
    }
}

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

    while (t--)
    {
        int n, l;
        cin>>n>>l;
        int x[n];
        vector<int> cnt(32,0);
        for(int i=0;i<n;i++){
            cin>>x[i];
            countDigits(x[i], cnt);
        }

        int ans = 0;
        for(int i=32;i>=0;i--){
            if(cnt[i] > int(n/2)){
                ans = (ans<<1) | 1;  
            }else{
                ans = ans<<1;
            }
        }

        cout<<ans<<"\n";
    }
    

    return 0;  
}