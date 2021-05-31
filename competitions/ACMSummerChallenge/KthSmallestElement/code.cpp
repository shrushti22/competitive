#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p = n;
    int p1 =0, p2=n-1;
    long long int res=0;
    while(k-p>0){
        res = max(res, a[p1]+a[p2]);
        k = k-p;
        p--;
        p1++;
    }
    if(k>0){
        res = max(res, a[p1]+a[p1+k-1]);
    }
    cout<<res;
    return 0;
}