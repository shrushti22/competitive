
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

        long long int a[n];
        
        long long int min_odd = LLONG_MAX, min_even=LLONG_MAX;

        if(n==1){
            cout<<a[0]<<"\n";
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i%2==0){
                min_even= min(min_even, a[i]);
            }else{
                min_odd = min(min_odd, a[i]);
            }
        }
        
        int flag_odd=1,flag_even=1;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%min_even!=0){
                    flag_even=0;
                }
                if(a[i]%min_odd==0){
                    flag_odd=0;
                }
            }else{
                if(a[i]%min_even==0){
                    flag_even=0;
                }
                if(a[i]%min_odd!=0){
                    flag_odd=0;
                }
            }   
        }

        if(flag_even){
            cout<<min_even<<"\n";
        }else if(flag_odd){
            cout<<min_odd<<"\n";
        }else{
            cout<<"0\n";
        }

    }

    return 0;  
}