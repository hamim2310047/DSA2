#include<iostream>
#include<vector>
using namespace std;

vector<int> adjlist[10];
int visited[10];
void addEdge(int u,int v){
    adjlist[u].push_back(v);
}
void dfs(int start){
    visited[start]=1;
    cout<<start<<" ";
    for (int i = 0; i < adjlist[start].size(); i++)
    {
        if (!visited[adjlist[start][i]])
        {
            dfs(adjlist[start][i]);
        }
    }
}
int main(){
    int x;
    cout<<"size: ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        visited[i]=0;
    }
    int u, v;
    cout<<"Input: "<<endl;
    while(1){
        cin>>u>>v;
        if(u==-1||v==-1){
            break;
        }
        addEdge(u,v);
    }
    cout<<"DFS: "<<endl;
    dfs(0);
    return 0;
}