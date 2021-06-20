#include <bits/stdc++.h>
using namespace std;



vector<pair<long long int,long long int>> primeFactors(long long int n)
{
	vector<pair<long long int,long long int>> res;
    long long int count =0;
    long long int i =2;
    if (n % i == 0)
    {

		while(n%2==0){
			n = n/i;
			count++;
		} 
		res.push_back({i,count});
		  
    }
 
    
    for (long long int i = 3; i <= sqrt(n); i = i + 2)
    {
		count=0;
        
        while (n % i == 0)
        {
            count++;
            n = n/i;
        }

		if(count>0){
			res.push_back({i,count});
		}
    }
 
    
    if (n > 2){
		res.push_back({n,(long long int)1});
	}
    return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m;
	cin>>n>>m;
	long long int p; 
    vector<pair<long long int,long long int>> v = primeFactors(m);
    long long int ans = LLONG_MAX;
    long long int count=0;
    long long int k,t;
    for(long long int i=0;i<v.size();i++){
        count=0;
        k = t = v[i].first;
        while(k>0 && k<=n){ 
            count += n/k;
            k = k*t; 
        }
        count = count/v[i].second;
        ans = min(count,ans);
    }
	


    cout<<ans;

    return 0;
}
