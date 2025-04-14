#include <bits/stdc++.h>
using namespace std;

void shiftZero(vector<int> &arr)
{
    // vector<int> temp;
    // for(int i =0; i< arr.size(); i++){
    //     if(arr[i]!=0) {
    //         temp.push_back(arr[i]); 
    //     }          
    // }
    // for(int i =0; i< arr.size(); i++){
    //     if(i < temp.size()){
    //         arr[i] = temp[i];
    //     }else{
    //         arr[i] = 0;
    //     }
    // }

    int j = -1;
    for(int i =0; i< arr.size(); i++){
      if(arr[i] == 0){
        j=i;
        break;
      }
    }
    if(j == -1) return;
    for(int i =j+1; i< arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[j], arr[i]);
            j++;
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