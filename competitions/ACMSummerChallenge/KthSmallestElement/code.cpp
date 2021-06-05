#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    long long int low = *min_element(a, a + n);
    long long int high = *max_element(a, a + n);

    low = low+low;
    high = high + high;

    while(low<=high){
        long long int mid = (low+high)/2;

        long long int cntless = 0,cnteql = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]+a[j]<mid){
                    cntless++;
                }else if(a[i]+a[j]==mid){
                    cnteql++;
                }
            }
        }

        if(cntless<k && (cntless+cnteql)>=k){
            cout<<mid<<"\n";
            break;
        }else if(cntless>=k){
            high = mid-1;
        }else if(cnteql){
            low = mid + 1;
        }

    }
    return 0;
}