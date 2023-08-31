#include <iostream>
using namespace std;

//Peek function
void peek_(int arr[],int size)
{   if (size<=-1)
{
    cout<<"Stack Underflow"<<endl;
}
else
{
    cout<<"Last element of array is: "<<arr[size-1]<<endl;
}

}

//Pop element
void pop(int arr[], int size) {
    if(size<=-1)
        cout<<"Stack Underflow"<<endl;
    else {
    cout<<"The popped element is "<< arr[size-1] <<endl;
    size--;

    for (int n = 0; n < size; ++n) {
    cout << arr[n] << " ";
    }
    cout<<endl;
    }
}

//Push
    void push(int array[],int size) {

    size+=1; 
    cout<<"Please enter the value:"<<endl;
    int val;
    cin>>val;
    array[size-1]=val;
    //We need to do this till size-1 tak bcz pichle pop ke karan when only using this one must use it till size 
        for (int n = 0; n < size-1; ++n) {
    cout << array[n] << " ";
    }
    cout<<endl;
    }



int main() {
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int numbers[size];

    cout << "Enter numbers: " << endl;

  //  store input from user to array
    for (int i = 0; i < size; ++i) {
    cin >> numbers[i];
    }

    cout << "The numbers are: ";

  //  print array elements
    for (int n = 0; n < size; ++n) {
    cout << numbers[n] << " ";
    }
    cout<<endl;
    peek_(numbers,size);
    cout<<endl;
    pop(numbers,size);
    cout<<endl;
    push(numbers,size);
    return 0;
}