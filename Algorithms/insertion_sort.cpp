#include <bits/stdc++.h>
using namespace std;

// void selectionSort(int arr[], int n){
//         // Selection sort
//         for(int i=0; i<n-1; i++){
//             int min = i;
//             for(int j=i; j<n; j++){
//                 if(arr[min] > arr[j]){
//                     min = j;
//                 }
//             }
//             int temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;
//         }
// }

// void bubbleSort(int arr[], int n){

//     for(int i=n-1; i>=1; i--){
//         for(int j=0; j<=i-1; j++){
//             if(arr[j]> arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

// }

void insertionSort(int arr[], int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
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
    // selectionSort(arr, n);

    // Bubble sort
    // bubbleSort(arr, n);

    // Insertion Sort
    insertionSort(arr, n);

    for(int i=0; i<n; i++){
      cout << arr[i] << " ";   
    }

    return 0;
}