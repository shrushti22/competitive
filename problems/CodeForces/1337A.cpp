
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
    int a, b, c, d;

    while(t--){
        cin>>a>>b>>c>>d;

        int x = (a+b)/2, y = (b+c)/2, z = (c+d)/2;

        if((x+y) > z){
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }else{
            z = c;
            if((x+y) > z){
                cout<<x<<" "<<y<<" "<<z<<"\n";
            }else{
                y = c;
                if((x+y)>z){
                    cout<<x<<" "<<y<<" "<<z<<"\n";
                }else{
                    x = b;
                    cout<<x<<" "<<y<<" "<<z<<"\n";
                }
            }
        }
    }
    return 0;  
}