// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 

#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

    for (int i = 1; i <= 2*n-1; i++)
    {
            int end =i;
            int star = (2*n-2*end);
        if(i > n) { end = 2*n-i; star = 2*star; }
          for (int j = 1; j <= end; j++){
            cout << "*" << " ";
          }

          for (int j = 0; j < (2*n-2*end); j++){
            cout << " " << " ";
          }

          for (int j = 1; j <= end; j++){
            cout << "*" << " ";
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