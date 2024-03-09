#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        vector<int> res;
        if (size1>size2)
        {
            for (int i = 0; i < size1; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    if (nums1[i]==nums2[j])
                    {
                        res.push_back(nums1[i]);
                        nums2.erase(nums2.begin()+j);
                        break;
                    }
                    
                }
                
            }
            
        }
        else
        {
            for (int i = 0; i < size2; i++)
            {
                for (int j = 0; j < size1; j++)
                {
                    if (nums2[i]==nums1[j])
                    {
                        res.push_back(nums2[i]);
                        nums1.erase(nums1.begin()+j);
                        break;
                    }
                    
                }
                
            }
        }
        return res;
    }
int main()
{
    
return 0;
}