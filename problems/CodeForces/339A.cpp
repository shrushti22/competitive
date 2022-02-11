
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

    vector<int> a(3, 0);
    for(int i=0; i<s.length(); i+=2){
            a[int(s[i])-49]++;  
    }

    // cout<<a[0]<<" ";
    // cout<<a[1]<<" ";
    // cout<<a[2]<<" ";

    string out = "";
    while(a[0]){
        out += "1+";
        a[0]--;
    }
    // cout<<out<<" ";

    while(a[1]){
        out += "2+";
        a[1]--;
    }

    // cout<<out<<" ";

    while(a[2]){
        out += "3+";
        a[2]--;
    }
    // cout<<out<<" ";

    if(out.length()>0){
        cout<<out.substr(0, out.length()-1);
    }


    return 0;  
}