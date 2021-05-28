#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	long long int n;										
	for(int i=0;i<t;i++){
		cin>>n;
		n--;
		cout<<(n*n)<<"\n";
	}
			
}