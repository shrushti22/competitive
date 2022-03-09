
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

    double l,h;
    cin>>h>>l;

    cout<<setprecision(13)<<(l*l - h*h)/(2*h)<<"\n";
    return 0;  
}