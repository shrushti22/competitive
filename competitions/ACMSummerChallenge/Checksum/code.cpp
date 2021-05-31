#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        long long int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        long long int s=0;
        if(n%2==0){
            int k = int(n/2)-1;
            int p = n;
            for(int j=0;j<=k;j++){
                s = s + (a[n-1-j]*p);
                p--;
                s = s - (a[j]*p);
                p--;
            }
        }else{
            int k = int(n/2)-1;
            int p = n;
            int j=0;
            for(j=0;j<=k;j++){
                s = s + (a[n-1-j]*p);
                p--;
                s = s - (a[j]*p);
                p--;
            }
            s = s + (a[j]*p);
        }
        cout<<s<<"\n";
    }
}