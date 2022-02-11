
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
    int ans = 0;
    while(n--){
        string s;
        cin>>s;

        if(s == "Tetrahedron"){
            ans += 4;
        }else if(s == "Cube"){
            ans += 6;
        }else if(s == "Octahedron"){
            ans += 8;
        }else if(s == "Dodecahedron"){
            ans += 12;
        }else if(s == "Icosahedron"){
            ans += 20;
        }
    }

    cout<<ans;

    return 0;  
}