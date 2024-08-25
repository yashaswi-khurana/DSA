#include <bits/stdc++.h>
using namespace std;
    int nthUglyNumber(int n) {
        int m = 1;
        vector<int> list;
        while(n>0){
            int i = m;
            while(i%2==0) i=i/2;
            while(i%3==0) i=i/3;
            while(i%5==0) i=i/5;
            if(i==1){
                n--;
                list.push_back(m);
            }
            m++;
        }
        return list.back();
    }
int main()
{
    int n = 10;
    cout<<nthUglyNumber(n)<<endl;
return 0;
}