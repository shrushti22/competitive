
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

    while(n--){
        int c, summ;
        cin>>c>>summ;
        
        if(summ<=c){
            cout<<summ<<"\n";
        }else if(summ%c==0){
            int q = summ/c;
            cout<<q*q*c<<"\n";
        }else{
            int q = summ/c;
            int r = summ%c;
            cout<<(q*q*(c-r)) + (r*(q+1)*(q+1))<<"\n";
        }
    }

    return 0;  
}