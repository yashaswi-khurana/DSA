/**
 * The above code finds the intersection of two arrays and prints the common elements.
 * 
 * @param arr An array of integers containing elements {1,2,3,3,4,5,6,7,8,9}.
 * @param brr The parameter `brr` is an array containing the elements to be compared with the elements
 * in `arr` to find the intersection.
 * @param sizea The size of the array `arr`, which is 10 in this case.
 * @param sizeb The parameter "sizeb" represents the size of the array "brr". In this case, it is 5.
 */
#include<iostream>
using namespace std;
// void intersection(int arr[],int brr[],int sizea,int sizeb){
//     for (int i = 0; i < sizea; i++)
//     {
//         for (int j = 0; j < sizeb; j++)
//         {   if (brr[j]>arr[i])
//         {break;
//         }
        
//             if (arr[i]==brr[j])
//             {
//                 brr[j]=INT8_MIN;
//                 cout<<arr[i]<<endl;
//                 break;
//             }
//             else
//             {
//                 continue;
//             }
//         }
        
//     }
    
// }
//optemized code or called 2 pointer apparoach 
void intersection(int arr1[],int arr2[],int size1,int size2){
    int i=0,j=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]<arr2[j])
        {
            i++;
        }
        else if (arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        
    }
}

int main()
{
    int arr[10]={1,2,3,3,4,5,6,7,8,9};
    int brr[5]={3,3,4,5,6};
    intersection(arr,brr,10,5);
return 0;
}
