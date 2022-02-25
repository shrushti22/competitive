
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
    int t;
    int flag = 0;
    cin>>n;
    while(n--){
        cin>>t;
        if(t%2==0){
            cout<<t/2<<"\n";
        }else{
            if(flag==1){
                cout<<(t+1)/2<<"\n";
                flag = 0;
            }else{
                cout<<(t-1)/2<<"\n";
                flag = 1; 
            }
        }
    }

    

    return 0;  
}