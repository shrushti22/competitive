#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long int summ=0,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        summ =0;
        for(long long int j=0;j<n;j++){
            cin>>a[j];
            summ += a[j];
        }

        int rem = summ % n;
        if(rem!=0){
            cout<<"-1"<<"\n";
        }else{
            summ = summ/n;
            long long int k=0;
            for(long long int j=0;j<n;j++){
                if(a[j]>summ){
                    k++;
                }
            }

            cout<<k<<"\n";
        }


    }

    return 0;
}