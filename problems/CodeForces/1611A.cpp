#include<bits/stdc++.h>

using namespace std;


pair<int,int> reverse(int a){
    int out =0;
    int flag = 0;
    while(a){
        out = (out*10) + (a%10);
        if(a%2==0){
            flag=1;
        }
        a = a/10;
    }
    return make_pair(out,flag);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%2==0){
            cout<<"0\n";
        }else{
            pair<int, int> b = reverse(a);
            if(b.first%2==0){
                cout<<"1\n";
            }else if(b.second){
                cout<<"2\n";
            }else{
                cout<<"-1\n";
            }
        }
    }
}