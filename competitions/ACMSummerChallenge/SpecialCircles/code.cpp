#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	long long int n;
	cin >> num;	
	for(int i=0;i<num;i++){
		cin>>n;
		if(n%2==0){
			cout<<(n>>1)-1<<"\n";
		}else{
			cout<<(n>>1)<<"\n";
		}
	}								
}