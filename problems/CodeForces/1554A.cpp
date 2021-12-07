
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n; 
        cin>>n;
        long long int a[n];
        long long int ans = 0,temp;

        for(int j=0;j<n;j++){
            cin>>a[j];
            if(j!=0){
                temp = a[j]*a[j-1];
                ans = (temp>ans)?temp:ans;
            }
        }

        cout<<ans<<"\n";
    }
}