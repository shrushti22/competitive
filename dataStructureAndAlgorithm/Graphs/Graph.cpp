#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

struct Edge{
    int src;
    int dest;
};


class Graph{
    int N;
    Node **head;
    Node* getAdjList(int dist, Node *head){
        Node *newNode = new Node(dist);
        newNode->next = head;

        return newNode;
    }

    public:
        Graph(Edge edges[], int n, int V){
            N = V;
            head = new Node*[N];

            for(int i=0;i<N;i++){
                head[i] = nullptr;
            }

            for(int i=0;i<n;i++){
                int src = edges[i].src;
                int dest = edges[i].dest;

                Node *newNode = getAdjList(dest, head[src]);
                head[src] = newNode;

                //comment next two expression for directed graph
                newNode = getAdjList(src, head[dest]);
                head[dest] = newNode;
            }
        }

        ~Graph(){
            for(int i=0;i<N;i++){
                delete[] head[i];
            }

            delete[] head;
        }

        bool pathExist(int src, int dest){
            queue<int> q;

            vector<bool> visited(N, false);

            q.push(src);
            visited[src] = true;
            while(q.empty()==false){
                int temp = q.front();
                q.pop();
                Node *ptr = head[temp];
                while(ptr != nullptr){
                    if(visited[ptr->val]==false){
                        if(ptr->val == dest){
                            return true;
                        }else{
                            visited[ptr->val] = true;
                            q.push(ptr->val);
                        }
                    }
                }
            }

            return false;

        }

};


int main(){

    int v;
    cout<< "enter number of vertices\n";
    cin>>v;
    int n;
    cout<< "enter number of edges\n";
    cin>> n;
    Edge edges[n];
    for(int i=0;i<n;i++){
        cin>>edges[i].src;
        cin>>edges[i].dest;
    }

    Graph g(edges, n, v);

    cout<< "check for path btw two vertices\n";
    cout<< "enter source\n";
    int src, dest;
    cin>>src;
    cout<< "enter destination\n";
    cin>>dest;

    if(g.pathExist(src, dest)){
        cout<<"path Exist";
    }else{
        cout<<"No path found";
    }

}