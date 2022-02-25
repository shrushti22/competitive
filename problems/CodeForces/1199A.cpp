
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

    int n, x, y;
    cin>>n>>x>>y;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        int j=max(i-x, 0);
        int flag = 1;
        while(j<i){
            if(a[j]<=a[i]){
                flag = 0;
            }
            j++;
        }

        if(flag==0){
            continue;
        }

        j = min(n-1, i+y);
        while(j>i){
            if(a[j]<=a[i]){
                flag = 0;
            }
            j--;
        }
        if(flag==1){
            cout<<i+1;
            break;
        }

    }

    return 0;  
}