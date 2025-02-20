#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{

    // auto count = 0;
    // while (n > 0)
    // {
    //     /* code */
    //     int rem = n % 10;
    //     count += 1;
    //     n = n / 10;
    // }
    // return count;
    auto count = log10(n);
    cout << "------" << count << endl;
    return count;
    // return log10(n);

}
int main()
{
    int n;
    cin >> n;
    auto ans = digit(n);
    cout << ans << endl;
    return 0;
}