#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long int summ = 0;
        for(int i=0;i<32;i++){
            long long int count =0;
            for(int j=0;j<n;j++){
                count += (a[i]&1);
            }
            summ += (count*(count-1))/2;
        }

        cout<<summ<<"\n";

    }

    return 0;

}