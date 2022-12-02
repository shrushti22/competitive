#include<bits/stdc++.h>

using namespace std;

bool isPossible(long long int i,long long  int x, long long int n, vector<long long int> &a, vector<long long int> &b){
    long long int available = x;
    for(int j=0; j<n; j++){
        long long int p = (b[j]-(a[j]*i));
        if(p<0){
            available += p;
        }
        // cout<<available<<"\n";
        if(available<0){
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long int n, k;
    cin>>n>>k;
    vector<long long int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    long long int l = 0, r = 1e12;
    while(l<=r){
        long long int mid = l + (r-l)/2;
        // cout<<mid<<"\n";
        if(isPossible(mid, k, n, a, b)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    } 

    cout<<l-1;

    return 0;  
}