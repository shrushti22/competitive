
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

    long long int n;
    cin>>n;
    long long int luckyDigits = 0;
    while(n){
        long long int r = n%10;
        if(r==4 || r==7){
            luckyDigits++;
        }
         n /= 10;
    }

    int flag = 1;
    if(luckyDigits==0){
        flag = 0;
    }
    while(luckyDigits){
        long long int r = luckyDigits%10;
        if(r!=4 && r!=7){
            flag = 0;
        }

        luckyDigits /= 10;
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;  
}