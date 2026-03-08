#include <iostream>
#include<vector>
using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>> AdjMatrix;

    public:
    Graph(int v,int vectVal){
        this->V = v;
        AdjMatrix.resize(V, vector<int>(V, vectVal));
    }

    void addEdges(int u, int v){
        AdjMatrix[u][v] = 1;
        AdjMatrix[v][u] = 1;
    }

    void printAdjMatrix(){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                cout << AdjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(auto j:AdjList[i]){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
    void bfsTraversal()

};

int main(){
    int v, e;
    cout << "Enter Vertices and Edges: ";
    cin >> v >> e;
    Graph g(v,0);
    for(int i=1; i<=e; i++){
        int u,v;
        cout << "Enter Edge " << i << ": ";
        cin >> u >> v;
        g.addEdges(u,v);
    }
    g.bfsTraversal();
    cout << "The AdjMatrix is: " << endl;
    g.printAdjMatrix();
    return 0;
}