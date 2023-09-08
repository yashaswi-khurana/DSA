#include<iostream>
using namespace std;
int main()
{
    char space =' ';
    int k = 1;
    cout<<"Please enter Rows ";
    int rows;
    cin>>rows;
    int temp=rows;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         if (j<temp-1)
    //         {
    //             cout<<space;
    //         }
    //         else
    //         {
    //             cout<<k;
    //             k++;
    //         }
            
    //     }
    //             temp--;
    //     cout<<endl;
    // }
    
    int i=0;
    while (i<rows)
    {
        int j=0;
        while (j<rows)
        {
            if (j<temp-1)
            {
                cout<<space;
            }
            else
            {
                cout<<k;
                k++;
            }
            j++;
        }
        temp--;
        cout<<endl;
        i++;
    }
return 0;
}