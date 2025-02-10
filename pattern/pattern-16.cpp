// A 
// B B 
// C C C 
// D D D D 
// E E E E E 


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        char pr = 'A' + i;
        for(int j=0; j <= i ; j++){
            cout << pr << " ";
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