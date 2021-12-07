
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
       cin>>n;
       int arr[n][5];
        vector<int> summ(5,0);

       for(int j=0; j<n; j++){
           for(int l=0; l<5;l++){
               cin>>arr[j][l];
               summ[l] += arr[j][l];
           }
       }

        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(summ[j] + summ[k] >= n){
                    int dayOne=0, dayTwo=0;
                    for(int l=0; l<)
                }
            }
        }

    }
    
}