
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;

    vector<vector<char>> a(n,vector<char> (m, '.'));

    int flag = 1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0; j<m; j++){
                a[i][j] = '#';
            }
        }else{
            if(flag){
                a[i][m-1] = '#'; 
                flag = 0;
            }else{
                a[i][0] = '#';
                flag = 1;
            }     
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }

    return 0; 
}