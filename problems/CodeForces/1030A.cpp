
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
    int flag = 1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]){
            flag = 0;
        }
    }

    if(flag){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    
    return 0;  
}