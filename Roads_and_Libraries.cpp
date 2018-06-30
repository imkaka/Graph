//https://www.hackerrank.com/challenges/torque-and-development/problem
//by-@imkaka
#include <bits/stdc++.h>

using namespace std;
vector<int>*adj;
bool visited[100001];

void dfs(int s){
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        if(visited[adj[s][i]]==false)
            dfs(adj[s][i]);
        
    }
     
}
int main() {
    int q;
    cin >> q;
    while(q--){
        int n,count=0;
        int m;
        long x;
        long y,cost;
        cin >> n >> m >> x >> y;
        adj=new vector<int>[n];
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            city_1--;
           city_2--;
            adj[city_1].push_back(city_2);
            adj[city_2].push_back(city_1);
        }
        for(int i=0;i<n;i++)
            visited[i]=false;
        if(y>=x)
            cost=n*x;
        else {
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                 dfs(i);
                 count++;}
        }
  
        cost=count*x+y*(n-count);}
            
         cout<<cost<<"\n";   
      
    }
    return 0;
}
