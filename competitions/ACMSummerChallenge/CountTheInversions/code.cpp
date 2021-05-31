#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int countAndMerge(int arr[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            {arr[k++]=left[i++];}
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    return res;
}

int countInv(int arr[], int l, int r)
{
    int res = 0;
    if (l<r) {
       
        int m = (r + l) / 2;
 
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m , r);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,A,B;
    long long int q;
    cin>>n>>q;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    long long int c = countInv(b,0,n-1);

    for(long long int i=0;i<q;i++){
        cin>>A>>B;
        if(A>B){
            swap(A,B);
        }
        if(a[A]<a[B]){
            long long int cnt = c;
            cnt++;
            for(int j=A+1;j<B;j++){
                if(a[j]<a[B]){
                    cnt++;
                }else{
                    cnt--;
                }
                if(a[j]<a[A]){
                    cnt--;
                }else{
                    cnt++;
                }
            }
            cout<<cnt<<"\n";
        }else if(a[A]>a[B]){
            long long int cnt = c;
            cnt--;
            for(int j=A+1;j<B;j++){
                if(a[j]<a[A]){
                    cnt--;
                }else{
                    cnt++;
                }
                if(a[j]<a[B]){
                    cnt++;
                }else{
                    cnt--;
                }
            }
            cout<<cnt<<"\n";
        }else{
            cout<<c<<"\n";
        }

    }

    return 0;
}