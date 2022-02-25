
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
        int n; 
        cin>>n;

        string s; 
        cin>>s;
        int flag = 1;
        for(int i=0; i<(n/2); i++){
            if(s[i]!=s[n-i-1]){
                if(s[i]=='a'){
                    if(s[n-i-1]!='c'){
                        flag = 0;
                        break;
                    }
                }else if(s[i]=='z'){
                    if(s[n-i-1]!='x'){
                        flag = 0;
                        break;
                    }
                }else{
                    if((int(s[i])+1!=int(s[n-i-1])-1) && (int(s[i])-1!=int(s[n-i-1])+1)){
                        flag = 0;
                        break;
                    }
                }
                
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