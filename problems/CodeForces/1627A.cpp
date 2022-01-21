
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

    int t;
    cin>>t;
    while (t--)
    {
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        char arr[n][m];
        char k;
        int flag = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>k;
                arr[i][j] = k;
                if(k=='B')
                    flag=1;
            }
        }

        if(arr[r-1][c-1]=='B'){
            cout<<"0\n";
        }else if(flag==1){
            int fnd = 0;
            for(int i=0;i<m;i++){
                if(arr[r-1][i] =='B'){
                    fnd = 1;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(arr[i][c-1]=='B'){
                    fnd = 1;
                    break;
                }
            }
            if(fnd){
                cout<<"1\n";
            }else{
                cout<<"2\n";
            }
        }else{
            cout<<"-1\n";
        }


    }
    

    return 0;  
}