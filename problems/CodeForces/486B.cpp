
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
    int b[n][m];
    vector<vector<int>> a(n, vector<int> (m, 0));
    vector<vector<bool>> visi(n, vector<bool> (m, false));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
            if(b[i][j]==0){
                for(int k=0; k<n; k++){
                    visi[k][j] = true;
                }
                for(int k=0; k<m; k++){
                    visi[i][k] = true;
                }
            }
        }
    }

    vector<bool> row(n, false);
    vector<bool> column(m, false);

    int flag = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[i][j]==1){
                if(row[i]==true){
                    visi[i][j] = true;
                    continue;
                }
                if(column[j]==true){
                    visi[i][j] = true;
                    continue;
                }
                if(visi[i][j]==false){
                    a[i][j] = 1;
                    visi[i][j] = true;
                    column[j] = true;
                    row[i] = true;
                }else{
                    int setNow = 0;
                    for(int k=j+1; k<m; k++){
                        if(visi[i][k]==false){
                            setNow = 1;
                            visi[i][k] = true;
                            a[i][k] = 1;
                            column[k] = true;
                            row[i] = true;
                            break;
                        }
                    }
                    if(setNow==1){
                        continue;
                    }else{
                        for(int k=i+1; k<n; k++){
                            if(visi[k][j]==false){
                                setNow = 1;
                                visi[k][j] = true;
                                a[k][j] = 1;
                                column[j] = true;
                                row[k] = true;
                                break;
                            }
                        }
                        if(setNow==0){
                            flag = 0;
                            break;
                        }
                    }

                }
            }
        }
        if(flag==0){
            break;
        }
    }

    if(flag){
        cout<<"YES\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j]<<" ";
            }
            cout<< "\n";
        }
    }else{
        cout<<"NO\n";
    }


    return 0;  
}