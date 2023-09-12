#include <bits/stdc++.h>
using namespace std;


// #define MAX 1000
//Using Classes
// class Stack {
//     int top;
// public:
//     int a[MAX];
//     Stack() { top = -1; }
//     bool push(int x);
//     int pop();
//     int peek();
//     bool isEmpty();
// };
// bool Stack::push(int x)
// {
//     if (top >= (MAX - 1)) {
//         cout << "Stack Overflow";
//         return false;
//     }
//     else {
//         a[++top] = x;
//         cout << x << " pushed into stack\n";
//         return true;
//     }
// }
// int Stack::pop()
// {
//     if (top < 0) {
//         cout << "Stack Underflow";
//         return 0;
//     }
//     else {
//         int x = a[top--];
//         return x;
//     }
// }
// int Stack::peek()
// {
//     if (top < 0) {
//         cout << "Stack is Empty";
//         return 0;
//     }
//     else {
//         int x = a[top];
//         return x;
//     }
// }
// bool Stack::isEmpty()
// {
//     return (top < 0);
// }
// int main()
// {
//     class Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     cout << s.pop() << " Popped from stack\n";
//     cout << "Top element is : " << s.peek() << endl;
//     cout <<"Elements present in stack : ";
//     while(!s.isEmpty())
//     {
//         cout << s.peek() <<" ";
//         s.pop();
//     }
//     return 0;
// }

//OR
class Stack{
    public: 
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        cout<<"Stack Overflow"<<endl;
    }
    void pop(){
        if (top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
        
    }
    void peek(){
        if (top>=0)
        {
            cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
        }
        
    }
    bool isEmpty(){
        if (top<0)
        {
            return true;
        }
        return false;
    }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    cout<<s.isEmpty()<<endl;
    return 0;
}
//Ans:
// Stack Overflow
// Stack Overflow
// Stack Overflow
// 3
// 2
// 1
// Stack is empty
// Stack Underflow
// Stack is empty
// Stack Underflow
// 1