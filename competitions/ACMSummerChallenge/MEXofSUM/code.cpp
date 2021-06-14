#include<bits/stdc++.h>

using namespace std;


long long int findSmallest(long long int arr[], int n)
{
   long long int res = 1;
 
   
   for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];
 
   return res;
}
 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

		sort(arr, arr+n);

		long long int ans = findSmallest(arr, n); 
		cout<<ans<<"\n";

		    
    }

    return 0;
}