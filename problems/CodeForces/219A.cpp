
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
    vector<int> c(26, 0);

    for(int i=0; i<s.length(); i++){
        c[int(s[i]-97)]++;
    }

    int flag = 1;
    string str = "";
    for(int i=0; i<26; i++){
        if(c[i]%n==0){
            if(c[i]>0){
                str += string(c[i]/n,char(i+97));
            }   
        }else{
            flag=0;
            break;
        }
    }

    string out;
    if(flag){
        while(n--){
            out += str;
        }
        cout<<out;
    }else{
        cout<<"-1";
    }

    return 0;  
}