
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
        int k = 1;
        vector<int> out;
        while(n){
            int r = n%10;
            if(r){
                out.push_back(r*k);
            }
            k *= 10;
            n /= 10;
        }
        cout<<out.size()<<"\n";
        for(int i=0; i<out.size(); i++){
            cout<<out[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;  
}