
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
        
         if((n/2)%2==0){
            cout<<"YES\n";
            int a[n];
            int i=2, j=n;

            for(int k=0; k<n/2; k++){
                a[k] = i;
                i += 2;
                k++;
                a[k] = j;
                j -= 2;
            }
            i=1;
            j=n+1; 
            for(int k=n/2; k<n; k++){
                a[k] = i;
                i += 2;
                k++;
                a[k] = j;
                j-= 2;
            }

            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
         }else{
             cout<<"NO\n";
         }
     }

    return 0;  
}