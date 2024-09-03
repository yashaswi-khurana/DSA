//  Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        vector<pair<int,int>> v;
        queue<pair<Node*,int>> q;
        v.push_back({root->val,0});
        q.push({root,0});
        while(!q.empty()){
            Node* node = q.front().first;
            int level = q.front().second;
            q.pop();
            for (Node* ch: node->children){
                q.push({ch,level+1});
                v.push_back({ch->val,level+1});
            }
        }
        map<int,vector<int>> mp;
        for(auto it: v){
            mp[it.second].push_back(it.first);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
int main()
{
    
return 0;
}
