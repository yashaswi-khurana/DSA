#include <bits/stdc++.h>
using namespace std;
void rev_str(string& str,int i , int j){
    //Base Case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    rev_str(str,i,j);
    // cout<< str;

}
// void rev_str(string str){
//     if(str.length()==0){
//         return;
//     }
//     string ros = str.substr(1);
//     rev_str(ros);
//     cout<<str[0];
// }
int main()
{
    string str = "abcde";
    cout<<str<<endl;
    rev_str(str,0,str.length()-1);
    cout<<str<<endl;
return 0;
} 