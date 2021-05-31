#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int,int>> path;
	int n,m,q,i,j;
	long long int k;
	cin>>n>>m>>q;
	int a[n+2][m+2];

	for(int i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	i=0;
	for(j=0;j<m+2;j++){
		a[i][j] = 1;
		a[i+n+1][j] = 1;
	}
	j=0;
	for(i=0;i<n+2;i++){
		a[i][j] = 1;
		a[i][j+m+1] = 1;
	}

	i=1;
	j=1;
	pair<int, int> p;
	bool travel = true;
	while(i!=n+1 && j!=m+1){
		if(a[i][j]==1){
			travel = !travel;
			p.first = i;
			p.second = j;
			path.push_back(p);
		}
		if(travel){
			j++;
			
		}else{
			i++;
		}	
	}
	p.first = i;
	p.second = j;
	path.push_back(p);
	if(travel){
		j--;
	}else{
		i--;
	}
	while(i!=1 || j!=0){
		if(a[i][j]==1){
			travel = !travel;
			p.first = i;
			p.second = j;
			path.push_back(p);
		}
		if(travel){
			j--;
			
		}else{
			i--;
		}
	}
	p.first = 1;
	p.second = 0;
	path.push_back(p);
	long long int s = path.size();

	for(int i=0;i<q;i++){
		cin>>k;
		k = k%s;
		if(k==0){
			cout<<path[s-1].second<<" "<<path[s-1].first<<endl;
		}else{
			cout<<path[k-1].second<<" "<<path[k-1].first<<endl;
		}
	}



			// Writing output to STDOUT
}
