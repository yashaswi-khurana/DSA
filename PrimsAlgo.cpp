#include <bits/stdc++.h>
using namespace std;
int prims(int V, vector<vector<int>> adj[]){
    int sum = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    vector<int> vis(V,0);

    pq.push({0,0});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;

        if(vis[node]==1)continue;
        vis[node]=1;
        sum+=wt;
        for (auto it: adj[node])
        {
            int adjNode = it[0];
            int edW = it[1];
            if (!vis[adjNode])
            {
                pq.push({edW,adjNode});
            }
            
        }
        
    }
    return sum;
}
int main()
{
    //TestCase
    int V = 5;
    vector<vector<int>> adj[V];
    adj[0].push_back({1,2});
    adj[1].push_back({0,2});
    adj[1].push_back({2,3});
    adj[2].push_back({1,3});
    adj[0].push_back({3,6});
    adj[3].push_back({0,6});
    adj[3].push_back({2,1});
    adj[2].push_back({3,1});
    adj[3].push_back({4,4});
    adj[4].push_back({3,4});
    adj[4].push_back({2,5});
    adj[2].push_back({4,5});
    cout<<prims(V,adj)<<endl;
return 0;
}