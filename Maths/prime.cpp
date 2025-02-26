#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){          
            count++;
            if (i != n / i){
               count++;
            }
        }
    }
    if (count == 2) { cout << "True";}
    cout << "False";
}

int main()
{
    int n;
    cin >> n;
    // Print the divisors
    printDivisors(n);

    return 0;
}