#include <bits/stdc++.h>
using namespace std;

void shiftZero(vector<int> &arr)
{
    int j = -1;
    for(int i =arr.size()-1; i>=0; i--){
      if(arr[i] == 0){
        j=i;
        break;
      }
    }
    cout<< "------" << j << endl;
    if(j == -1) return;
    for(int i =j-1; i>= 0; i--){
        if(arr[i]!=0){
            swap(arr[j], arr[i]);
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};  // 3,2,1,4,5,6,7
    shiftZero(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    return 0;
}