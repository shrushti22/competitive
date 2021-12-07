
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        long long int n;
        cin>>n;
        if(n&1==0){
            cout<<(max(n,(long long)6)/2)*5<<"\n";
        }else{
            cout<<((max(n+1,(long long)6))/2)*5<<"\n";
        } 
    }
}