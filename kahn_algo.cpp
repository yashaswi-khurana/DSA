#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> topo_sort(int V, vector<int> adj[]){
        int indegree[V]={0};
        for(int i = 0; i<V;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for (int i = 0; i < V; i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    //Test case 1
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;
    vector<int> ans = s.topo_sort(V, adj);
    for (auto node : ans) {
        cout << node << " ";
    }
    cout << endl;

return 0;
}