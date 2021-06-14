#include <bits/stdc++.h>

using namespace std;
long long int countSubstr(int j, int k){
    if(k<j){
        return 0;
    }
    if(k==j){
        return 1;
    }
    int n = k-j+1;
    return (n*(n+1))/2;
}
int main(){
    int n,m;
    string s;
    unordered_map<char,int> mp;
    cin>>n>>m;
    cin>>s;
    char c;
    for(int i=0;i<m;i++){
        cin>>c;
        mp[c] = 1;
    }
    int j=0;
    long long int ans = 0;
    for(int i=0;i<n;i++){
        if(mp.find(s[i]) != mp.end()){
            ans += countSubstr(j,i-1);
            j = i+1;
        }
    }
    if(j!=n){
       ans += countSubstr(j,n-1); 
    }
    cout<<ans;
    return 0;
}