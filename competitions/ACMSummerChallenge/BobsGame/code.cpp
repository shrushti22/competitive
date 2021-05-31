#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p;
	long long int c;
	cin>>n;
	cin>>p;
	p--;
	long long int a[n];
	int mini = INT_MAX;
	int index = -1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<mini){
			mini = a[i];
			index = i;
		}
	}
	if(p<index){
		c=0;
		mini++;
		for(int i=0;i<=p;i++){
			a[i] = a[i]-mini;
			c = c + mini;
		}
		mini--;
		for(int i=p+1;i<=index;i++){
			a[i] = a[i]-mini;
			c = c+mini;
		}
		mini++;
		for(int i=index+1; i<n;i++){
			a[i] = a[i] - mini;
			c = c + mini;
		}
	}else if(p==index){
		c=0;
		for(int i=0;i<n;i++){
			a[i]= a[i]-mini;
			c = c + mini;
		}
	}else{
		c=0;
		for(int i=0;i<=index;i++){
			a[i] = a[i] -mini;
			c = c+mini;
		}
		mini++;
		for(int i=index+1; i<=p;i++){
			a[i] = a[i] - mini;
			c = c+mini;
		}
		mini--;
		for(int i=p+1;i<n;i++){
			a[i] = a[i] - mini;
			c = c + mini;
		}

	}
	a[index] = c;

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}


}
