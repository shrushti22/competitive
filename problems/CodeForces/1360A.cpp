
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
         int a, b;
         cin>>a>>b;
         int area = 2*(a*b);
         int t = sqrt(area);
            if(t*t >= area && t >= max(2*min(a,b),max(a,b))){
                cout<<t*t<<"\n";
            }else{

                while(t*t<area || t<max(2*min(a,b),max(a,b))){
                    t++;
                }
                cout<<t*t<<"\n";
            }
     }

    return 0;  
}