#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
    int temp;
    for(int i=start, j=end-1; i<(start+end)/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }
}

vector<int> rightRotate(vector<int> &arr, int k)
{

    reverse(arr, 0, arr.size()-k);
    reverse(arr, arr.size()-k, arr.size());
    reverse(arr, 0, arr.size());

    return arr;
}

int main()
{

    vector<int> arr = {1,2,3,4,5,6,7};  // 3,2,1,4,5,6,7
    vector<int> dd = rightRotate(arr, 3);
    for (int i = 0; i < dd.size(); i++)
    {
        /* code */
        cout << dd[i] << endl;
    }

    return 0;
}