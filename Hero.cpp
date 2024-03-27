#include <bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int Health;
    // private:
    char Level;

    // void print(){
        // cout << "Health: " << Health << endl;
        // cout << "Level: " << Level << endl;
    // }
    public:
    // Hero(){
    //     cout<<"Hero Object Created"<<endl;
    //     Health = 100;
    //     Level = 'A';
    // }
    //Parameterized Constructor
    // Hero(int Health){
    //     cout<<"This->"<<this<<endl;
    //     this -> Health = Health;
    // }

    //Copy Constructor
    // Hero(Hero &h){
    //     cout<<"Copy Constructor Called"<<endl;
    //     Health = h.Health;
    //     Level = h.Level;
    // }
    // Hero(int Health, char Level){
    //     this-> Health = Health;
    //     this-> Level = Level;
    // }
    static int k;//Static Variable
    static int random(){
        return k;
    }
    // int getHealth(){
    //     return Health;
    // }
    // char getLevel(){
    //     return Level;
    // }
    // void setHealth(int h){
    //     Health = h;
    // }
    // void setLevel(char l){
    //     Level = l;
    // }

    //Destructor
    // ~Hero(){
    //     cout<<"Destructor Called"<<endl;
    // }

};

// int Hero::k = 8; // static member variable
