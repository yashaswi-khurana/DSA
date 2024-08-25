#include <bits/stdc++.h>
using namespace std;
//UP-RIGHT-DOWN-LEFT
int x[4]={0,1,0,-1};
int y[4]={1,0,-1,0};
int route(long long n,long long k, long long w, long long h,string path){
    long long ans = 0;
    int pos_x=0;
    int pos_y=0;
    for(long long i = 0; i<k;i++){
        for(long long j = 0; j<n; j++){
            if(path[j]=='U'){
                if(pos_y==h){
                pos_y += y[2];
                pos_x += x[2];
                }else{
                pos_y += y[0];
                pos_x += x[0];
                }
            }
            else if(path[j]=='R'){
                if(pos_x==w){
                pos_y += y[3];
                pos_x += x[3];
                }else{
                pos_y += y[1];
                pos_x += x[1];
                }
            }
            else if(path[j]=='D'){
                if(pos_y==0){
                pos_y += y[0];
                pos_x += x[0];
                }else{
                pos_y += y[2];
                pos_x += x[2];
                }
            }
            else if(path[j]=='L'){
                if(pos_x==0){
                pos_y += y[1];
                pos_x += x[1];
                }else{
                pos_y += y[3];
                pos_x += x[3];
                }
            }
            if(pos_x==0 && pos_y==0){
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        long long n,k,w,h;
        cin>>n;
        cin>>k;
        cin>>w;
        cin>>h;
        string path;
        cin>>path;
        cout<<route(n,k,w,h,path)<<endl;
    }
return 0;
}