#include <bits/stdc++.h>
using namespace std;

bool digit(int n)
{
    // cout << pow(2, 5) << endl;
    // return true;
    int copy = n, sum =0, digit = 0;
    while (n>0)
    {
        /* code */
        int rem = n  % 10;
        n= n/10;
        digit++;

    }
    n = copy;
    while (n > 0)
    {
        /* code */
        int rem = n%10;
        n = n / 10;
        sum = pow(rem, digit) + sum;
    }  
    if (copy == sum) return true;
    return false;

}
int main()
{
    int n;
    cin >> n;
    auto ans = digit(n);
    cout << ans << endl;
    return 0;
}