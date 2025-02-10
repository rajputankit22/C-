// A
// AB
// ABC
// ABCD
// ABCDE


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for(char j='A'; j <= 'A'+i ; j++){
            cout << j;
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