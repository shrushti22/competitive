#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int s){
	int i=0,j=0;
	int tsum = 0;
	vector<int> out;

	while(i<n){
		if(tsum==s){
			out.push_back(j+1);
			out.push_back(i);
			return out;
		}else if(tsum<s){
			tsum = tsum + arr[i];
			i++;
		}else{
			tsum = tsum - arr[j];
			j++;
		}
	}

	while(j<n){
		if(tsum == s){
			out.push_back(j+1);
			out.push_back(i);
			return out;
		}else if(tsum > s){
			tsum = tsum - arr[j];
			j++;
		}else{
			break;
		}
	}
	
	out.push_back(-1);
	return out;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int summ;
	cin>>summ;
	vector<int> v = subarraySum(arr, n, summ);
	if(v[0]==-1){
		cout<<"-1"<<endl;
	}else{
		cout<<v[0]<<" "<<v[1]<<endl;
	}
}