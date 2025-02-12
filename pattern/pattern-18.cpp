// C 
// C B 
// C B A 


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        char pr = 'A' + n-1;
        for (int j = 0; j <= i; j++)
        {
            cout << pr << " ";
            pr--;
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