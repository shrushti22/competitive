
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

    int n, t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int curr = 1;
    int flag = 0;
    while(curr<=t){
        if(curr==t){
                flag = 1;
                break;
        }
        
        curr = curr + a[curr-1];
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;  
}