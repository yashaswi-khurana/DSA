#include <bits/stdc++.h>
using namespace std;
int score = 15;
void print_score() { cout << "Score: " << score << endl; }
void a (int i){
    cout<<i<<endl;
    score++;//Bad Practice 
}
void b (int& i){
    cout<<i<<endl;
}
int main()
{
    int i = 5;
    a(i);
    print_score();
return 0;
}