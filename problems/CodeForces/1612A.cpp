#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin>>t;
    int x, y;
    int x1,y1;
    while(t--){
        cin>>x>>y;
        x1 = x%2;
        y1 = y%2;

        if(x1==0 && y1==0){
            cout<<(x/2)<<" "<<(y/2)<<"\n";
        }else if(x1==1 && y1==1){
            cout<<(x/2)<<" "<<(y/2 + 1)<<"\n";
        }else{
            cout<<"-1 -1\n";
        }
    }


    return 0;
}
