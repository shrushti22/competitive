
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
    
    string s;
    while(t--){
        cin>>s;

        int i=0, j = s.length()-1;
        int count = 0;
        while(i<=j && s[i]!='1'){
            i++;
        }
        while(j>i && s[j]!='1'){
            j--;
        }

        while(i<=j){
            if(s[i]=='0'){
                count++;
            }
            i++;
        }

        cout<<count<<"\n";

    }
    

    return 0;  
}