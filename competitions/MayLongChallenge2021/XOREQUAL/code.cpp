#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	long long int ans, m = 1000000007;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    ans = 1;
	    n--;
	    long long int base = 2;
	    while(n>0){
	        if(n%2 == 1){
	            ans = (ans*base) % m;
	        }
	        n = n>>1;
	        base = (base*base)%m;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
