
#include <bits/stdc++.h>

using namespace std;

void recur(int a[], int n, double sum1, double sum2, int n1, int n2, double &ans){
    if(n==0){
        if(n1!=0 && n2!=0){
            double avg = (double)(double(sum1)/double(n1)) + (double)(double(sum2)/double(n2));
            // cout<<avg<<" ";
            if(avg>ans){
                ans = avg;
            }
        }
        return;
    }
    // cout<<1<<" ";
    recur(a, n-1, sum1 + a[n-1], sum2, n1+1, n2, ans);
    recur(a, n-1, sum1, sum2 + a[n-1], n1, n2+1, ans);

    return;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        double summ =0 ;
        for(int j=0; j<n; j++){
            cin>>a[j];
            summ += double(a[j]);
        }
        sort(a, a+n);
        double sum1=0,sum2=0;
        int n1=0,n2=0;
        double ans = INT_MIN;
        // recur(a, n, sum1, sum2, n1, n2, ans)
        for(int j=0; j<n-1; j++){
            sum1 += double(a[j]);
            sum2 = summ - sum1;
            double avg = (sum1/double(j+1)) + (sum2/double(n-j-1));
            if(avg>ans){
                ans = avg;
            }
        }
        cout<<fixed<<setprecision(9)<<ans<<"\n";
    }
    return 0;
}