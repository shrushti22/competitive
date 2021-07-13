#include <bits/stdc++.h>
using namespace std;


void BFS(vector<list<pair<int,long long int>>> adj, int s, int n, vector<long long int> &dist) 
{ 	
    queue<int>  q;
	
	q.push(s); 
    dist[s] = 0;
    long long int temp;
	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop(); 
	
		for(auto v=adj[u].begin(); v!=adj[u].end(); v++){
            temp = dist[u]+ (v->second - dist[u]>=0 ? v->second - dist[u] : 0) ;
            if(dist[v->first] > temp){
                    dist[v->first] = (dist[u]+ (v->second - dist[u]>=0 ? v->second - dist[u] : 0));
                    q.push(v->first);
            }
		} 
	} 
}

long long int BFSDin(vector<list<pair<int,long long int>>> adj, int V){
    vector<long long int> dist(V);

	for(int i = 0;i<V; i++){
        dist[i] = LLONG_MAX;
    } 
		

    BFS(adj, 0, V, dist);
    return dist[V-1];
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin>>n>>r;
    vector<list<pair<int,long long int>>> graph(n);
    int n1, n2, c;
    int flag = 0;
    for(int i=0; i<r; i++){
        cin>>n1>>n2>>c; 
        graph[n1-1].push_back({n2-1, c});
        graph[n2-1].push_back({n1-1, c});
        if(n2==n || n1==n)
            flag=1;
    }

    
    
    if(flag==1){
        long long int ans = BFSDin(graph, n);
        if(ans==LLONG_MAX){
            cout<<"NOT POSSIBLE";
        }else{
            cout<<ans;
        }
    }else{
        cout<<"NOT POSSIBLE";
    }

    return 0;
}