#include <bits/stdc++.h>
#include "Hero.cpp"
using namespace std;
int main(){
    

    // Hero ramesh;
    // cout<<"Ramesh Health"<<ramesh.getHealth();
    // // ramesh.Level = 'A';
    // ramesh.setLevel('A');
    // ramesh.setHealth(100);
    // cout << "Health: " << ramesh.getHealth() << endl;
    // cout << "Level: " << ramesh.getLevel() << endl;
    // // cout << "Level: " << ramesh.Level << endl;
    // cout<<"size of ramesh object"<<sizeof(ramesh)<<endl;



    // //dynamically
    // Hero *suresh = new Hero();
    // cout<<"Suresh Health"<<suresh->getHealth();
    // suresh->setLevel('B');
    // suresh->setHealth(200);
    // cout << "Health: " << suresh->getHealth() << endl;
    // cout << "Level: " << suresh->getLevel() << endl;
    




    // Hero Ramesh(10);
    // cout<<"Address of Ramesh "<<&Ramesh<<endl;
    // cout<<"Ramesh Health"<<Ramesh.getHealth()<<endl;

    // Hero Suresh(70,'c');

    // Hero R(Suresh);   // Copy constructor
    // cout<<"R Health"<<R.getHealth()<<endl;
    // cout<<"R Level"<<R.getLevel()<<endl;
    // cout<<"Suresh Address "<<&Suresh<<endl;
    // cout<<"R Address "<<&R<<endl;

    // assignment copy
    // Hero Ramesh(100,'A');
    // Hero Suresh(200,'B');
    // Suresh = Ramesh;
    // cout<<"Suresh Health"<<Suresh.getHealth()<<endl;
    // cout<<"Suresh Level"<<Suresh.getLevel()<<endl;

    // Hero a;
    // Hero *b = new Hero();
    // delete b;
    //manually del for heap


    // cout<<"Count: "<<Hero::count<<endl;
    cout<<"Count: "<<Hero::random<<endl;
return 0;

}