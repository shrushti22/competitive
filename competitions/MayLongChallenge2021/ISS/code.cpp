#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define N 4000010
bool prime[N + 1];

#define pii pair<int, int>

unsigned primes[N];

vector <pii> factors;
void primeFactors(int num)
{
    int expo = 0;   
    for (int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        int p = primes[i];
        while (num % p == 0){
            expo++;
            num = num / p;
        }
        if (expo>0)
            factors.push_back(make_pair(p, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}


vector <int> divisors;
void setDivisors(int n, int i) {
    int j, x, k;
    for (j = i; j<factors.size(); j++) {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++) {

            divisors.push_back(x);  
            setDivisors(x, j + 1);
            x *= factors[j].first;
        }
    }
}


void SieveOfEratosthenes(int n){
    fill(prime, prime+N+1, true);
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int j=0;
    for (int i=2;i<=n;i++){
        if(prime[i]){
            primes[j++] = i;
        }
    }
}

bool isPrime(int n)
{
    return prime[n]; 
}





int main() {
	// your code goes here
	int t,k,s,p,r;
	SieveOfEratosthenes(N);
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>k;
	    s=0;
	    p = 5 + ((k-1)*4);
	    
	    if(isPrime(p)){
	        s = p + ((2*k)-1);
	    }else{
	        divisors.clear();
            factors.clear();
	        r = (2*k) - 1;
	        primeFactors(p);
	        setDivisors(1, 0);
	        divisors.push_back(1);
	        sort(divisors.begin(),divisors.end());
	        divisors.pop_back();
	        unordered_map<int,int> divisors_map;
	        for(int j=0;j<divisors.size();j++){
	            divisors_map[divisors[j]] = 1;
	        }
	        
	   
            int l=3;
            vector<int> a;
            a.push_back(1);
            for(int j=0;j<r;j++){
               if(divisors_map[l]){
                   s = s + l;
                   a.push_back(l);
               }else{
                   if(isPrime(l)){
                       s++;
                   }else{
                       for(int c = a.size()-1;c>=0;c--){
                           if(l%a[c]==0){
                               s = s+a[c];
                               break;
                           }
                       }
                   }
               }

               l = l+2;
            } 
    	    s = s + p;
    	    divisors.clear();
            factors.clear();
	    }
	    cout<<s<<endl;
	}
	return 0;
}
