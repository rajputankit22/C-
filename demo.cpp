#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
        // Selection sort
        for(int i=0; i<n-1; i++){
            int min = i;
            for(int j=i; j<n; j++){
                if(arr[min] > arr[j]){
                    min = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){  
        cin >> arr[i];
    }

    // Selection sort
    selectionSort(arr, n);

    for(int i=0; i<n; i++){
      cout << arr[i] << " ";   
    }


    return 0;
}