#include <bits/stdc++.h>
using namespace std;

int digit(int x)
{
    int sign =(x<0)?-1:1;
    long long num = abs((long long)x);
    long long reverse = 0;
    while (num > 0)
    {
        /* code */
        int rem = num  % 10;
        reverse = reverse * 10 + rem;
        // cout << "rem: ---" << reverse << endl;
        if (reverse > INT_MAX || reverse < INT_MIN) {
            // cout << "rem: ---" << reverse << endl;
            return 0;
        }
        num = num / 10;
    }
    
    return sign * (int)reverse;

}
int main()
{
    int n;
    cin >> n;
    auto ans = digit(n);
    cout << ans << endl;
    return 0;
}