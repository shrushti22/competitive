
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

    int i=1;

    while(true){
        int cubes_req = (i*(i+1))/2;
        if(n>=cubes_req){
            n -= cubes_req;
            i++;
        }else{
            break;
        }
    }

    i--;
    cout<<i;

    return 0;  
}