
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

        
        string out,curr;
        int j=0;
        for(int i=0;i<n-2;i++){

            cin>>curr;
            if(i==0){
                out = out + curr;
                j+=2;
            }else{
                if(out[j-1]==curr[0]){
                    out = out + curr[1];
                    j++;
                }else{
                    out = out + curr;
                    j+=2;
                }
            }
        }

        if(j==n){
            cout<<out<<"\n";
        }else{
            out = out + 'a';
            cout<<out<<"\n";
        }
    }

    return 0;  
}