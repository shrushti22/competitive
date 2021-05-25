#include <bits/stdc++.h>
using namespace std;

int power(int x, int y, int p)
{

  int res = 1;
  x = x % p;
 
  if (x == 0)
    return 0;
 
  while (y > 0)
  {
    if ((y & 1) == 1)
        res = (res * x) % p;

    y = y >> 1;
    x = (x * x) % p;
  }

  return res;
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int m = 1000000000 + 7;
    int t,n,k;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        cin>>s;
        long long int c=0;
        bool oe = ((n%2)==0);
        if(n==1){
            c = (((int(s[0])-96)-1)%m);
        }else{
            int half = n/2;
            if(oe){
                half--;
            }
            int flag =1;
            int p = 1;
            for(int j=0;j<=half;j++){
                if(s[j]>s[n-j-1])
                    flag=0;
                c += ((((int(s[j])-96)-1)%m) * power(k, half-j, m)) %m;  
            }
            if(flag){
                c++;
            }
        }
        
        cout<<"Case #"<<i+1<<": "<<c<<"\n";
    }

    return 0;
}