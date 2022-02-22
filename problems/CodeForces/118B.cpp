
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

    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=(n-1-i); j++){
            cout<<"  ";
        }
        if(i==0){
            cout<<i;
        }else{
            for(int j=0; j<=i; j++){
                cout<<j<<" ";
            }
        }
        
        for(int j=i-1;j>=0;j--){
            if(j==0){
                cout<<j;
            }else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=(n-1-i); j++){
            cout<<"  ";
        }
        if(i==0){
            cout<<i;
        }else{
            for(int j=0; j<=i; j++){
                cout<<j<<" ";
            }
        }
        for(int j=i-1;j>=0;j--){
            if(j==0){
                cout<<j;
            }else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;  
}