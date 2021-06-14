#include <bits/stdc++.h>
using namespace std;

int countPlatforms(int arr[], int dep[], int n){
	int res = INT_MIN;
	int cnt = 0;
	int i=0,j=0;
	sort(arr, arr+n);
	sort(dep, dep+n);
	while(i<n && j<n){
		if(arr[i]<=dep[j]){
			i++;
			cnt++;
		}else{
			j++;
			cnt--;
		}
		res = max(res, cnt);
	}

	return res;
}


int main() {
	int n;
	cin>>n;
	int arr[n],dep[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		cin>>dep[i];
	}
	
	int platforms = countPlatforms(arr, dep, n);
	
	cout<<platforms<<"\n";
	return 0;
}