#include <bits/stdc++.h>
using namespace std;
    int toNumber(vector<int>& digits){
        int ans = 0;
        for(int i =0 ; i<digits.size(); i++){
            ans =ans*10 + digits[i];
        }
        return ans;
    }
    int myAtoi(string s) {
        int n = s.size() - 1;
        bool negative = false;
        vector<int> digit;
        while(n>=0){
            if (s[n]>='0' && s[n]<='9'){
                digit.push_back(s[n]-'0');
            }
            if (s[n] == '-'){
                negative=true;
            }
            n--;
        }   
        reverse(begin(digit),end(digit));
        int ans = toNumber(digit);
        if(negative){
            return -ans;
        }
        else{
            return ans;
        }
    }
int main()
{
    int ans = myAtoi("42");
    cout<<ans<<endl;
return 0;
}