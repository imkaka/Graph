
//https://www.hackerrank.com/contests/codegeeks-2017/challenges/flood-in-a-village/problem
//To check if given vertice is connected to other given One
//My First graph Solution :D
// by-@imkaka

#include<bits/stdc++.h>
using namespace std;


bool visited[500];
vector <int>*adj;
void dfs(int s) {
    visited[s] = true;
    for(int i = 0;i < adj[s].size();++i)    {
     if(visited[adj[s][i]] == false)
        dfs(adj[s][i]);
    }
}


int main()
{
    int  nodes, edges,t;
    cin>>t;
    while(t--){
    cin >> nodes;
    cin >> edges;
    adj=new vector<int>[nodes];
    


    for(int i = 0;i < edges;++i)
    { int x,y;
            cin >> x >> y;
     x--;
     y--;
     
        adj[x].push_back(y);
        adj[y].push_back(x);
     }

     for(int i = 0;i < nodes;++i)
     visited[i] = false;
     int s,k;
     cin>>s>>k;
        s--;
        k--;
        
     dfs(s);
     if(visited[k]==true)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;


}
return 0;
}
