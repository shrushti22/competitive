#include<bits/stdc++.h>

using namespace std;


long long int primeFactors(long long int n)
{
    long long int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n = n/2;
    }
 
   
    for (long long int i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            cnt++;
            n = n/i;
        }
    }
 
    if (n > 2)
        cnt++;

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long int a,b,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>k;

        
        if(k==1){
                if(a==b){
                    cout<<"NO"<<"\n";
                }else if(a>b){
                    if(a%b==0){
                        cout<<"YES"<<"\n";
                    }else{
                        cout<<"NO"<<"\n";
                    }
                }else{
                    if(b%a==0){
                        cout<<"YES"<<"\n";
                    }else{
                        cout<<"NO"<<"\n";
                    }
                }
        }else{
            long long int factors = primeFactors(a);
            factors += primeFactors(b);
            if(factors>=k){
                cout<<"YES"<<"\n"; 
            }else{
                cout<<"NO"<<"\n";
            }
        }
        

    }


    return 0;
}