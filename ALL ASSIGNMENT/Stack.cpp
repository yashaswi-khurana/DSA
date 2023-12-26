#include <bits/stdc++.h>
using namespace std;

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