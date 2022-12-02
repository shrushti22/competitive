
#include<bits/stdc++.h>

using namespace std;
bool isSafe(string s, int n, int i){
    if(i-4<0){
        return true;
    }
    if(s[i]==s[i-4] && s[i-1]==s[i-3]){
        return false;
    }
    if(i-5<0){
        return true;
    }
    if(s[i]==s[i-5] && s[i-1]==s[i-4] && s[i-2]==s[i-3]){
        return false;
    }
    return true;
}
bool recurCheck(string s, int n, int i){
    if(i==n){
        return true;
    }
    
    if(s[i]=='?'){
        s[i] = '0';
        if(isSafe(s, n, i) && recurCheck(s, n, i+1)){
            return true;
        } 
        s[i] = '1';
        if(isSafe(s, n, i) && recurCheck(s, n, i+1)){
            return true;
        }  
    }else{
        if(isSafe(s, n, i) && recurCheck(s, n, i+1)){
            return true;
        } 
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool final = recurCheck(s, n, 0);

        if(final){
            cout<<"Case #"<<i+1<<": POSSIBLE\n";
        }else{
            cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
        }

        i++;
    }

    return 0;  
}