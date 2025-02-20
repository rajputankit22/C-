#include <bits/stdc++.h>
using namespace std;

int* printDivisors(int n, int &size)
{
    vector<int> abc;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){          
            abc.push_back(i);
            if (i != n / i){
                abc.push_back(n/i);
            }
        }
    }

    sort(abc.begin(), abc.end());

        // Update size
        size = abc.size();

            // Allocate dynamic memory for result
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = abc[i];
    }

    return result;
}

int main()
{
    int n, size;
    cin >> n;
    set<int> abc;
    int *divisors = printDivisors(n, size);
    cout << "------------" << size << endl;
    // Print the divisors
    cout << "Divisors of " << n << " are: ";
    for (int i = 0; i < size; i++)
    {
        cout << divisors[i] << " ";
    }
    cout << endl;
    return 0;
}