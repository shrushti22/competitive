
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
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int t1, t2, t3;

    t1 = (k*l) / (n*nl);
    t2 = (c*d) / n;
    t3 = p/ (n*np);

    cout<< min(t1, min(t2, t3));
    
    return 0;  
}