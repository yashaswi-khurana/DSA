#include <bits/stdc++.h>
using namespace std;
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set st(bank.begin(),bank.end());
        queue<pair<string,int>> q;
        q.push({startGene,0});
        while(!q.empty()){
            string search = q.front().first;
            int step = q.front().second;
            q.pop();
            if(search==endGene) return step;
            for (int i = 0; i < 8; i++)
            {
                char org = search[i];
                for(auto x : "ACGT"){
                    search[i]=x;
                    if(st.find(search)!=st.end()){
                        q.push({search,step+1});
                        st.erase(search);
                    }
                }
                search[i]=org;
            }
            
        }
        return -1;
    }
int main()
{
    //Test case 1
    string startGene = "AACCGGTT";
    string endGene = "AACCGGTA";
    vector<string> bank = {"AACCGGTA"};
    cout<<minMutation(startGene,endGene,bank)<<endl;
    //Test case 2
    startGene = "AACCGGTT";
    endGene = "AAACGGTA";
    bank = {"AACCGGTA","AACCGCTA","AAACGGTA"};
    cout<<minMutation(startGene,endGene,bank)<<endl;
return 0;
}