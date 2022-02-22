
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

    int a[7];
    int summ = 0;
    for(int i=0; i<7; i++){
        cin>>a[i];
        summ += a[i];
    }

    n = n%summ;

    if(n){
        int day = 0;
        while(n){
            if(n>=a[day]){
                n -= a[day];
            }else{
                n = 0;
            }
            day++;
        }
        cout<<day;
    }else{
        int day = 6;
        while(a[day]==0){
            day--;
        }
        cout<<day+1;
    }

    return 0;  
}