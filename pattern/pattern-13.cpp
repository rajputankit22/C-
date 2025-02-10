// 1
// 23
// 456
// 78910
// 1112131415


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int end =0, start = 1;
    for (int i = 1; i <= n; i++)
    {
        end += i;
        for(int j=start; j <= end; j++){
            cout << j;
        }
        start = end+1;
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