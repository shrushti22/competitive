
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

    string s;
    cin>>s;
    int lw=0,cp=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=97){
            lw++;
        }else{
            cp++;
        }
    }

    if(cp==s.length() ){
        for(int i=0; i<s.length(); i++){
            s[i] = int(s[i]) + 32;
        }
    }else if(cp==s.length()-1 && s[0]>=97){
        s[0] = int(s[0]-32);
        for(int i=1; i<s.length(); i++){
            s[i] = int(s[i]) + 32;
        } 
    }

    cout<<s;

    return 0;  
}