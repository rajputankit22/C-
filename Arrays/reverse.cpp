#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int n, int start, int end)
{
    int temp;
    for(int i=start, j=end-1; i<(start+end)/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }
}

int main()
{

    vector<int> arr = {1,3,6,11,12,17};  // 3,2,1,4,5,6,7
    reverse(arr, arr.size(), 0, 4);
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}