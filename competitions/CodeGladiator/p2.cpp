#include <bits/stdc++.h>
using namespace std;
#define N 1000001
bool prime[N + 1];

void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}


void getPrimes(vector<int> &v, int l, int r){
    int flag = 0;
    int i;
    for(i=l;i<=r;i++){
        if(prime[i]==true){
            v.push_back(i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        return;
    }else{
        for(int i=r;i>=l;i--){
            if(prime[i]==true){
                v.push_back(i);
                break;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes();
    int t;
    int l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        vector<int> v;
        getPrimes(v, l, r);
        if(v.size()==0){
            cout<<"-1"<<"\n";
        }else{
            cout<<v[1]-v[0]<<"\n";
        }

    }

    return 0;
}