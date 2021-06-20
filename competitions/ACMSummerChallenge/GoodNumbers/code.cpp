#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    int a, b;
    while (t--)
    {
        cin>>a>>b;
        int g = gcd(a,b);
        int count=0;
        for(int x=0;x<b;x++){
            if(g==gcd(x+a,b)){
                cout<<x<<"\n";
                count++;
            }
        }

        cout<<count<<"\n";
    }
    

    return 0;
}