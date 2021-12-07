
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ans = n/10;
        if(n%10==9){
            ans++;
        }

        cout<<ans<<"\n";
    }
}