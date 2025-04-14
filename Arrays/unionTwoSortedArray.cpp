#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoArray(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;
    vector<int> temp;
    for(int i=0; i<arr1.size(); i++){
        st.insert(arr1[i]);
    }

    for(int i=0; i<arr2.size(); i++){
        st.insert(arr2[i]);
    }

    for(auto it : st){
        temp.emplace_back(it);
    }
    return temp;
}

int main()
{
    vector<int> arr1 = {4,5,1};  // 3,2,1,4,5,6,7
    vector<int> arr2 = {1,2,3};  // 3,2,1,4,5,6,7
    vector<int> arr3 = unionOfTwoArray(arr1, arr2);
    for (int i = 0; i < arr3.size(); i++)
    {
        /* code */
        cout << arr3[i] << endl;
    }
    return 0;
}