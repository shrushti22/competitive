
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

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    
    
    int curr = 1, ans = INT_MIN;
    for(int i=1; i<n; i++){
        if(a[i]>a[i-1]){
            curr++;
        }else{
            curr = 1;
        }
        ans = max(curr, ans);
    }

    if(n==1){
        cout<<"1";
    }else{
        cout<<ans;
    }
    

    return 0;  
}