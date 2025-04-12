#include <bits/stdc++.h>
using namespace std;

vector<int> sorted(vector<int> &arr, int k)
{

    int d = k-1;
    int temp;
    for(int i=0, j=d; i<k/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << endl;
    }

    for(int i=k, j=arr.size()-1; i<(arr.size()+k)/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }



    cout << "------";
    for(int i=0, j=arr.size()-1; i<arr.size()/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }

    return arr;
}

int main()
{

    vector<int> arr = {1,3,6,11,12,17};  // 3,2,1,4,5,6,7
    vector<int> dd = sorted(arr, 4);
    for (int i = 0; i < dd.size(); i++)
    {
        /* code */
        cout << dd[i] << endl;
    }
    



    return 0;
}