#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //Pre calculate
   unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;  
    }


   int q;
   cin >> q;
   int m;
   cout << "Enter the number of queries"<< m << endl; 
   int min = INT_MAX;
   int max = INT_MIN;
   cout << "MAX: " << max << endl;
   cout << "Min: " << min << endl;
   while(q>0){
    q--;
    int x;
    cin >> x;
    // cout << hash[x] << endl;
    if(hash[x] < min){
        min = hash[x];
    }
   }
   cout << min << endl;
   return 0;
}