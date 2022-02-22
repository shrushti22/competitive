
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

    int a[10] = {0,1,3,6,10,15,21,28,36,45};
    int n;
    string s;
     cin>>n;
     cin>>s;
     string out = "";
     for(int i=0; i<10; i++){
         if(a[i]<s.length()){
             out += s[a[i]];
         }else{
             break;
         }

     }

     cout<<out;

    return 0;  
}