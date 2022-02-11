
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

    vector<int> c(26, 0);
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        c[int(s[i])-97]++;
    }

    int distinct;
    for(int i=0; i<26; i++){
        if(c[i]>0){
            distinct++;
        }
    }

    if(distinct%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;  
}