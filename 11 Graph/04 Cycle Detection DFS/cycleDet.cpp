#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>* l;

public:

    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void dfsHelper(int u, vector<bool>& vis){

        cout << u << " ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        }
    }

bool isCycleUndirDFS(int src, int par, vector<bool>& vis){

    vis[src] = true;

    for(int v : l[src]){

        if(!vis[v]){

            if(isCycleUndirDFS(v, src, vis)){
                return true;
            }

        }
        else if(v != par){
            return true;
        }
    }

    return false;
}

bool isCycle(){

    vector<bool> vis(V,false);

    for(int i=0;i<V;i++){

        if(!vis[i]){

            if(isCycleUndirDFS(i,-1,vis)){
                return true;
            }

        }
    }

    return false;
}
};

int main(){

    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);   // creates cycle
    g.addEdge(3,4);

    if(g.isCycle()){
        cout<<"Cycle Present"<<endl;
    }
    else{
        cout<<"No Cycle"<<endl;
    }

    return 0;
}