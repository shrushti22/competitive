#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define pii pair<int, int>

#define MAX 506944
#define LMT 712
#define LEN 500000

unsigned base[MAX / 64], primes[LEN];


#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))


void sieve()
{
    unsigned i, j, k;
    for (i = 3; i<LMT; i += 2)
        if (!chkC(base, i))
            for (j = i*i, k = i << 1; j<MAX; j += k)
                setC(base, j);
    primes[0] = 2;
    for (i = 3, j = 1; i<MAX; i += 2)
        if (!chkC(base, i))
            primes[j++] = i;
}

vector <pii> factors;
void primeFactors(int num)
{
    int expo = 0;   
    for (int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        int prime = primes[i];
        while (num % prime == 0){
            expo++;
            num = num / prime;
        }
        if (expo>0)
            factors.push_back(make_pair(prime, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}


vector <int> divisors;
void setDivisors(int n, int i,int b) {
    int j, x, k;
    for (j = i; j<factors.size(); j++) {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++) {
            if(x<b){
              divisors.push_back(x);  
            }
            setDivisors(x, j + 1, b);
            x *= factors[j].first;
        }
    }
}




int main() {
	// your code goes here
	sieve();
	int t,b,a,k;
	long long int n,m;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    cin>>m;
	    long long int c;
	    if(m<n){
	        b=m;
	        a=2;
	        c= (((n*(n-1))/2) - ((m*(m-1))/2)) + (m-1);
	        while(b>2){
	            k = m/b;
	            k = b*k;
	            primeFactors(k);
	            setDivisors(1, 0,b);
	            c = c + divisors.size();
	            b--;
	            a=2;
	            divisors.clear();
                factors.clear();
	        }
	        cout<<c<<endl;
	        divisors.clear();
            factors.clear();
	        
	    }else{
	        int b=n;
    	    int a=2;
    	    c=n-1;
    	    while(b>2){
	            k = m/b;
	            k = b*k;
	            primeFactors(k);
	            setDivisors(1, 0,b);
	            c = c + divisors.size();
	            b--;
	            a=2;
	            divisors.clear();
                factors.clear();
	            
	        }
    	    
    	    cout<<c<<endl;
    	    divisors.clear();
            factors.clear();
	    }
	}
	return 0;
}
