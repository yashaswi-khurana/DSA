//25 numbers are entered from the keyboard into an array the number to be searched is entered by the user from the keyboard write a programme to find if the number to be searched is present in the array and if it is present display the number of time it appeared in the array.

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, count = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to be searched: ";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Number not found";
    }
    else
    {
        cout << "Number found " << count << " times"<<endl;
    }
return 0;
}