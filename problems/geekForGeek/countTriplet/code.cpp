#include<bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n){
	sort(arr, arr+n);
	int count = 0;
	for(int i=n-1;i>=2;i--){
		int k=0,j=i-1;
		while(k<j){
			if(arr[k]+arr[j]==arr[i])
				count++;
			else if(arr[k]+arr[j]>arr[i])
				j--;
			else
				k++;
		}
	}
	return count;
}


int main() {
    int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int count = countTriplets(arr, n);
	cout<<count;
	return 0;
}