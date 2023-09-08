#include<iostream>
using namespace std;
int find_key(int n, int array[],int key){
    for(int i=0;i<n;i++){
        if (array[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
     int array[n];
     cout<<"enter array"<<endl;
     for(int i=0;i<n;i++){
        cin>>array[i];

     }
     int key;
     cout<<"enter the element you want to find"<<endl;
     cin>>key;
     cout<<find_key(n,array,key);

return 0;
}