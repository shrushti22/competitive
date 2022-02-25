
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

    int t;
    cin>>t;

    while(t--){
        string p, hash;
        vector<int> c(26, 0);
        cin>>p;
        cin>>hash;
        int req = 0;
        for(int i=0; i<p.length(); i++){
            req = req + (1<<(int(p[i])-97));
        }

        int i=0;
        while(i<hash.length() && c[int(hash[i])-97]>0){
            i++;
            c[int(hash[i])-97]--;
        }
        cout<<i<<" ";
        int j = hash.length()-1;
        while(j>i && c[int(hash[j])-97]>0){
            j--;
            c[int(hash[j])-97]--;
        }

        cout<<j<<" ";

        int flag = 1;
        for(int i=0; i<26; i++){
            if(c[i]!=0){
                flag = 0;
                break;
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;  
}