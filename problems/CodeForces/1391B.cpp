
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

    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int x=i, y=j;
                // cout<<i<<" "<<j<<" : ";
                while(x!=n-1 || y!=m-1){
                    // cout<<"("<<x<<y<<"), ";
                    if(visited[x][y]==true){
                        break;
                    }
                    if(a[x][y]=='R'){
                        if(y==m-1){
                            a[x][y]='D';
                            visited[x][y]=true;
                            x++;
                            count++;
                        }else{
                            visited[x][y] = true;
                            y++;   
                        }
                    }else if(a[x][y]=='D'){
                        if(x==n-1){
                            a[x][y]='R';
                            visited[x][y] = true;
                            y++;
                            count++;
                        }else{
                            visited[x][y] = true;
                            x++;
                        }
                    }
                
                }
                // cout<<"\n";
            }
        }

        cout<<count<<"\n";
    }

    return 0;  
}