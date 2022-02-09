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
    int x = 0;
    while(t--){
        string s;
        cin>>s;
        
        if(s[0]=='X'){
            // cout<<"1"<<endl;
            if(s[1]=='+'){
                x++;
            }else{
                x--;
            }

        }else{
            // cout<<"2"<<endl;
            if(s[0]=='+'){
                x++;
            }else{
                x--;
            }
        }
    }

    cout<<x;

    return 0;  
}