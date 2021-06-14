#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long double m,k,n;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        long long int time =0;
        long double fl = floor(n/m);
        while(n-fl >= k){
            n = fl;
            time++;
            fl = floor(n/m);
        }
        time = time + int(ceil(double(n)/k));
        cout<<time<<"\n";

    }

    return 0;
}