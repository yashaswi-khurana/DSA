#include<iostream>
using namespace std;
int main()
{
    // int ch = '1';
    // int num = 1;
    // cout<<endl;
    // switch (ch)
    // {
    // case 1:
    //     cout<<"First"<<endl;
    //     //break is req. to exit the switch statement break is essential.
    //     break;
    // case 2:
    //     cout<<"Second"<<endl;
    //     break;
    // case '1':switch (num)
    // {
    // case 1://this is how nested switch work
    //     cout<<"number"<<endl;
    //     break;
    
    // default:
    //     break;
    // }
    
    // default:
    //     break;
    // }

    //Calculator
    // int a;
    // int b;
    // cout<<"Please enter your first integer: ";
    // cin>>a;
    // cout<<"Please enter your second integer: ";
    // cin>>b;
    // char op;
    // cout<<"Please enter your operator: ";
    // cin>>op;
    // switch (op)
    // {
    // case '+':
    //     cout<<a+b<<endl;
    //     break;
    // case '-':
    //     cout<<a-b<<endl;
    //     break;
    // case '*':
    //     cout<<a*b<<endl;
    //     break;
    // case '/':
    //     cout<<a/b<<endl;
    //     break;
    // default:
    //     cout<<"Operator not found"<<endl;
    //     break;
    // }


    //Home-Work
    // int a;
    // cout<<"Please Enter your amount:";
    // cin>>a;
    // int hundred;
    // int fifty;
    // int twenty;
    // int one;
    // int b=a;
    // hundred = a/100;
    // a = a%100;
    // fifty = a/50;
    // a = a%50;
    // twenty = a/20;
    // a = a%20;
    // one = a/1;
    // a = a%1;
    // cout<<"Your amount is: "<<b<<endl;
    // cout<<"Hundred: "<<hundred<<endl;
    // cout<<"Fifty: "<<fifty<<endl;
    // cout<<"Twenty: "<<twenty<<endl;
    // cout<<"One: "<<one<<endl;

    //alternate solution using switch case
    int a;
    cout<<"Please Enter your amount:";
    cin>>a;
    int hundred,fifty,twenty,one;
    switch (1)
    {
    case 1:
        hundred=a/100;
        a=a%100;
        // break;
        cout<<"Amount of hundreds: "<<hundred<<endl;
    case 2:
        fifty=a/50;
        a=a%50;
        // break;
        cout<<"Amount of fifty: "<<fifty<<endl;

    case 3:
        twenty=a/20;
        a=a%20;
        // break;
        cout<<"Amount of twenty: "<<twenty<<endl;

    case 4:
        one=a/1;
        a=a%1;
        // break;
        cout<<"Amount of one: "<<one<<endl;
    
    }

return 0;
}