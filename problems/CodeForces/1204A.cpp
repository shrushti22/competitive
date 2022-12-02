
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
    int i;
    for(i=0; i<s.length(); i++){
        if(s[i]!='0'){
            break;
        }
    }

    int p = (s.length()-i+1)/2;
    int flag = 1;
    for(int j =i+1; j<s.length(); j++){
        if(s[j]=='1'){
            flag = 0;
        }
    }
    if(flag == 1 && (s.length()-i-1)%2==0){
        p--;
    }

    cout<<p<<"\n";

    return 0;  
}