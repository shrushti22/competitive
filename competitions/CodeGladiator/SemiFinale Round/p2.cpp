#include <bits/stdc++.h>
using namespace std;


void BFS(vector<vector<long long int>> adj, int s, bool visited[], int n, vector<long long int> &dist) 
{ 	
    queue<int>  q;
	
	visited[s] = true; 
	q.push(s); 
    dist[s] = 0;

	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop(); 
		 
		for(int v=0; v<n; v++){
		    if(adj[u][v]!=LLONG_MAX && visited[v]==false){
		        visited[v]=true;
                dist[v] = min(dist[v], dist[u]+ (adj[u][v] - dist[u]>=0 ? adj[u][v]- dist[u] : 0));
		        q.push(v);
		    }else if(adj[u][v]!=LLONG_MAX && visited[v]==true){
                dist[v] = min(dist[v], dist[u]+ (adj[u][v] - dist[u]>=0 ? adj[u][v]- dist[u] : 0));
            }
		} 
	} 
}

long long int BFSDin(vector<vector<long long int>> adj, int V){
    bool visited[V]; 
    vector<long long int> dist(V ,LLONG_MAX);
	for(int i = 0;i<V; i++) 
		visited[i] = false;

    BFS(adj, 0, visited, V, dist);
    return dist[V-1];
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin>>n>>r;
    vector<vector<long long int>> graph(n, vector<long long int> (n, LLONG_MAX));
    int n1, n2, c;
    int flag = 0;
    for(int i=0; i<r; i++){
        cin>>n1>>n2>>c; 
        graph[n1-1][n2-1] = c;
        if(n2==n)
            flag=1;
    }

    
    
    if(flag==1){
        cout<<BFSDin(graph, n);
    }else{
        cout<<"NOT POSSIBLE";
    }

    return 0;
}