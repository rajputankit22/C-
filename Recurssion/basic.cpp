#include <bits/stdc++.h>
using namespace std;

void rec(int n){
    cout << "Hello" << endl;
    n--;
    if (n == 0) return;
    rec(n);
}


int main()
{
    int n;
    cin >> n;
    rec(n);
    return 0;
}