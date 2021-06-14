


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reduceArray(vector<long long int> &a,int &li,int &i,int &n,int curr_sum){
    if(li!=i-1){
        li++;
        a[li] = curr_sum;
        li++;
        a.erase(a.begin()+li, a.begin()+i+1);
        i = li;
        n = a.size();
    }else{
        i++;
        return;
    }   
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n;
	vector<long long int> a(n);
	vector<long long int> sum_a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			sum_a[i] = a[i];
		}else{
			sum_a[i] = a[i] + sum_a[i-1];
		}
	} 
	cin>>m;
	vector<long long int> b(m);
	vector<long long int> sum_b(m);
	for(int i=0;i<m;i++){
		cin>>b[i];
		if(i==0){
			sum_b[i] = b[i];
		}else{
			sum_b[i] = b[i] + sum_b[i-1];
		}
	}

	if(sum_a[n-1]==sum_b[m-1]){
		int i=0,j=0;
		int flag = 1;
		while(i<n && j<m){
			if(a[i]==b[j]){
				i++;
				j++;
			}else{
				int li = i-1;
				int lj = j-1;
				long long int curr_sum_a = sum_a[i]-sum_a[li];
				long long int curr_sum_b = sum_b[j]-sum_b[lj];
				while(curr_sum_a!=curr_sum_b && i<n && j<m){
					if(curr_sum_a>curr_sum_b){
						j++;
						curr_sum_b = sum_b[j] - sum_b[lj]; 	
					}else{
						i++;
						curr_sum_a = sum_a[i] - sum_b[li];
					}
				}
				if(curr_sum_a==curr_sum_b){
					reduceArray(a,li,i,n,curr_sum_a);
                    reduceArray(b,lj,j,m,curr_sum_b);	
				}else{
                    flag=0;
                    break;
                }
			}
		}
		n = a.size();
		m = b.size();
		if(n==m && flag==1){
			cout<<n;
		}else{
			cout<<"-1";
		}
	}else{
		cout<<"-1";
	}
}

