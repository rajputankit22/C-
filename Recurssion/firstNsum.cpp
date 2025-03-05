#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    if (n==0) return 0;
    return  n += rec(n-1);
}


int main()
{
    int n;
    cin >> n;
    int result = rec(n);
    cout << result << endl;
    return 0;
}