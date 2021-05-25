
#include <bits/stdc++.h>
using namespace std;


int a[1000][1000];

void fill(){
    int k=1;
    for(int i=0;i<1000;i++){
        a[i][0] = 1 + ((i*(i+3))/2);
        int k = i+1;
        for(int j=1;j<1000;j++){
            a[i][j] = a[i][j-1] + k;
            k++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill();
    int t,x1,x2,y1,y2;
    long long int summ = 0;
    cin>>t;
    for(int i=0;i<t;i++){
        summ = 0;
        cin>>x1>>y1>>x2>>y2;
        for(int j= x1-1;j<x2;j++){
            summ += a[j][y1-1];
        }
        
        for(int j=y1;j<y2;j++){
            summ += a[x2-1][j];
        }
        
        cout<<summ<<"\n";
        
        
    }
	return 0;
}
