
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

    int n;
    cin>>n;

    string s;
    cin>>s;
    int flag = 0;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
            cout<<"YES\n";
            cout<<s.substr(i,2);
            flag = 1;
            break;
        }
    }

    if(flag==0){
        cout<<"NO\n";
    }

    return 0;  
}