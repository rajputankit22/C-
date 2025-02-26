#include <bits/stdc++.h>
using namespace std;

void printDivisors(int a, int b)
{
    while( a>0 && b>0){
        if (a>b)
        {
            a= a%b;
        } else {
            b= b%a;
        }
    }
    if(a==0){cout << b <<endl;}
    else { cout << a << endl;}
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    // Print the divisors
    printDivisors(n,m);

    return 0;
}