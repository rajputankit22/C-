#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <=1) { return n;}
    return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q>0){
        int x;
        cin >> x;
        cout << hash[x] << endl;
        q -= 1;
    }

    return 0;
}