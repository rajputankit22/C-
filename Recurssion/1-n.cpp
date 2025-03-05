#include <bits/stdc++.h>
using namespace std;

void rec(int n, int i){
    cout << i << endl;
    i++;
    if (i > n) return;
    rec(n, i);
}


int main()
{
    int n;
    cin >> n;
    rec(n, 1);
    return 0;
}