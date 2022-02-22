
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
    string out = "";
    int n = s.length();

    for(int i=0; i<n; i++){
        if(int(s[i])>=65 && int(s[i])<=90){
            s[i] = s[i] + 32;
        }
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }else if(int(s[i])>=97 && int(s[i])<=122){
            out += '.';
            out += s[i];
        }else{
            out += s[i];
        }
    }

    cout<<out;
    return 0;  
}