#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int count=0;
        unordered_map<int,int> mp;
        for(int j=0;j<k;j++){
            mp.clear();
            int tot_ele=0;
            int max_occ=0;
            for(int l=j;l<n;l=l+k){
                mp[a[l]]++;
                tot_ele++;
                if(mp[a[l]] > max_occ)
                    max_occ = mp[a[l]];
            }
            count += (tot_ele - max_occ);
        }
        
        cout<<count<<"\n";
    }
	return 0;
}
