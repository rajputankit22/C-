#include <bits/stdc++.h>
using namespace std;

// vector<int> unionOfTwoArray(vector<int> &arr1, vector<int> &arr2)
// {
//     set<int> st;
//     vector<int> temp;
//     for(int i=0; i<arr1.size(); i++){
//         st.insert(arr1[i]);
//     }

//     for(int i=0; i<arr2.size(); i++){
//         st.insert(arr2[i]);
//     }

//     for(auto it : st){
//         temp.emplace_back(it);
//     }
//     return temp;
// }

vector<int> unionOfTwoArray(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j=0;
    vector<int> unionArray;
    while (i<n1 && j<n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.size() ==0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArray.size() ==0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            i++;
        }
    }

    while (i<n1)
    {
        if (unionArray.size() ==0 || unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j<n2)
    {
        cout << "--------";
        if (unionArray.size() ==0 || unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionArray;
}

int main()
{
    vector<int> arr1 = {1,1,2,3,4,5};  // 3,2,1,4,5,6,7
    vector<int> arr2 = {2,3,4,4,5,6};  // 3,2,1,4,5,6,7
    vector<int> arr3 = unionOfTwoArray(arr1, arr2);
    for (int i = 0; i < arr3.size(); i++)
    {
        /* code */
        cout << arr3[i] << endl;
    }
    return 0;
}

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> inter;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                if (inter.size() == 0 || inter.back() != nums1[i])
                {
                    inter.push_back(nums1[i]);
                }
                i++;
                j++;
                continue;
            }
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return inter;
    }
};