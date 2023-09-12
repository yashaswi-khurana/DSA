#include<iostream>
using namespace std;
# define n 20
class circularqueue{
    int* arr;
    int front;
    int back;
    public:
  circularqueue(){
        arr =new int[n];
        front =-1;
        back =-1;
        }
    void enqueue(int x){
        if((back==n-1&& front==0)||back==(front-1)%(n-1)){
cout<<"stack is full"<<endl;
return;
    }
    else if(front==-1){
       front= back=0;
       arr[back]=x;
    }
    else if(front !=0 &&back==n-1){
 back=0;
 arr[back]=x;
    }
    else{
    back++;
    arr[back]=x;
   
}
}
void dequeue(){
    if(front==-1 ){
        cout<<"stack is empty"<<endl;
return ;
    }
    else if(front==back){
        front=back=-1;
    }
    else if(front==n-1){
        front=0;
    }
    else{
        front++;
    }


    }
int peek(){
    if(front==-1 ){
        cout<<"stack is empty"<<endl;
return -1;
    }
    return arr[front];
}

bool empty(){
 if(front==-1 ){
     
return true;
    }
    return false;
}
    };
int main(){
  circularqueue q;
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
   cout<< q.peek()<<endl;
    q.dequeue();
      cout<< q.peek()<<endl;
    q.dequeue();
      cout<< q.peek()<<endl;
    q.dequeue();
    cout<<q.empty();



return 0;
}
//ANS:
// 3
// 4
// 5
// 1
