#include <bits/stdc++.h>
using namespace std;
int compression(vector <char> chars){
    int i = 0;
    int ansIndex=0;
    while (i<n) 
    {
        int j = i+1;
        while (j<n && chars[i]==chars[j])
        {
            j++;
        }
        //yaha kab aaoge
        //ya toh vector poora traverse krdiya
        //ya fer new/different character encounter kia hai 
        
        //old char store krliya 
        chars[ansIndex++] = chars[i];

        int count = j-1;
        if (count>1))
        {
            string cnt = to_string(count);
            for (cahr ch: cnt){
                char [ansIndex++] =ch;

            }
        }i=j;
        
    }
    return ansIndex;
}
int main()
{
    
return 0;
}