// 1
// 01
// 101
// 0101
// 10101



#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0) start = 1; 
        else start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }

}
int main()
{
    int n;
    cin >> n;
    print1(n);
    return 0;
}