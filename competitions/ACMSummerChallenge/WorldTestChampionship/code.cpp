#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int b[100];
	fill(b,b+100,0);
	int a[n];
	map<int,int> d;
	for(int i=0;i<n;i++){
		cin>>a[i];
		d[a[i]]++;
	}

	if(m==n){
		cout<<"-1";
	}else{
		auto j = d.begin();
		int i=0;
		while(j!=d.end() && i<m){
			while((j->second)>0 && i<m){
				i++;
				j->second = j->second - 1;
				b[j->first - 1]++; 
			}
			if(j->second==0){
				j++;
			}
		}

		for(int i=0;i<n;i++){
			if(b[a[i]-1]!=0){
				b[a[i]-1]--;
			}else{
				cout<<a[i]<<" ";
			}

		}
	}
}