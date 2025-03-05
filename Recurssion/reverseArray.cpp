#include <bits/stdc++.h>
using namespace std;

void rev(int i, int n, int arr[]){
    if (i >= n/2) return;

    // Swap the elements
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;

    rev(i+1, n-1, arr);
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rev(0, n, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}