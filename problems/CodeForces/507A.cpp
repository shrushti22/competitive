
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

    int n, k;
    cin>>n>>k;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int t;

    for(int i=0; i<n; i++){
        cin>>t;
        pq.push(make_pair(t, i+1));
    }
    int cnt = 0;
    vector<int> out;
    while(!pq.empty() && pq.top().first<=k){
        cnt++;
        out.push_back(pq.top().second);
        k -= pq.top().first;
        pq.pop();
    }

    if(cnt>0){
        cout<<cnt<<"\n";
        for(int i=0; i<cnt; i++){
            cout<<out[i]<<" ";
        }
    }else{
        cout<<cnt;
    }

    return 0;  
}